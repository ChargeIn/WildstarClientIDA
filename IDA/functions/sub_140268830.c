//----- (0000000140268830) ----------------------------------------------------
__int64 __fastcall sub_140268830(char* a1, LONG* a2)
{
	int v3; // ebx
	char* i; // r8
	char v5; // dl
	CHAR v6; // cl
	unsigned __int64 v7; // r8
	CHAR* DeviceID; // rcx
	__int64 v9; // r11
	char v10; // r9
	__int16 v11; // dx
	CHAR v12; // r10
	CHAR v13; // dl
	CHAR v14; // r10
	unsigned int v16; // r12d
	HRESULT v17; // r13d
	OLECHAR* v18; // r15
	__int64 v19; // rcx
	HMODULE v20; // rax
	HMODULE v21; // rbx
	HRESULT(__stdcall * CoSetProxyBlanket)(IUnknown*, DWORD, DWORD, OLECHAR*, DWORD, DWORD, RPC_AUTH_IDENTITY_HANDLE, DWORD); // rax
	OLECHAR* v23; // r14
	__int64 v24; // rcx
	int v25; // ebx
	bool v26; // di
	OLECHAR* v27; // rsi
	OLECHAR* v28; // rdi
	unsigned int j; // ebx
	__int64 v30; // rcx
	unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v32; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v33; // [rsp+60h] [rbp-A0h] BYREF
	LPVOID ppv; // [rsp+68h] [rbp-98h] BYREF
	LONG* v35; // [rsp+70h] [rbp-90h]
	VARIANTARG pvarg; // [rsp+78h] [rbp-88h] BYREF
	__int64 v37[10]; // [rsp+90h] [rbp-70h] BYREF
	struct _DISPLAY_DEVICEA DisplayDevice; // [rsp+E0h] [rbp-20h] BYREF
	__m128i v39; // [rsp+290h] [rbp+190h] BYREF

	v35 = a2;
	v39.m128i_i16[0] = 0;
	sub_1407E4830((int*)&DisplayDevice, 0i64, 0x1A8ui64);
	DisplayDevice.cb = 424;
	v3 = 0;
	if (EnumDisplayDevicesA(0i64, 0, &DisplayDevice, 0))
	{
		while ((DisplayDevice.StateFlags & 8) != 0 || (DisplayDevice.StateFlags & 1) == 0)
		{
		LABEL_12:
			if (!EnumDisplayDevicesA(0i64, ++v3, &DisplayDevice, 0))
				goto LABEL_31;
		}
		for (i = a1; ; ++i)
		{
			v5 = *i;
			if ((unsigned __int8)(*i - 65) <= 0x19u)
				v5 += 32;
			v6 = i[DisplayDevice.DeviceName - a1];
			if ((unsigned __int8)(v6 - 65) <= 0x19u)
				v6 += 32;
			if (v5 != v6)
				goto LABEL_12;
			if (!*i)
				break;
		}
		v7 = -1i64;
		DeviceID = DisplayDevice.DeviceID;
		v9 = 0i64;
		do
		{
			v10 = *DeviceID;
			if (*DeviceID < 0)
			{
				if (v7 > 1 && (v10 & 0xE0) == 0xC0 && (v12 = DeviceID[1], (v12 & 0xC0) == 0x80))
				{
					DeviceID += 2;
					v11 = v12 & 0x3F | ((v10 & 0x1F) << 6);
					v7 -= 2i64;
				}
				else
				{
					if (v7 <= 2
						|| (v10 & 0xF0) != 0xE0
						|| (v13 = DeviceID[1], (v13 & 0xC0) != 0x80)
						|| (v14 = DeviceID[2], (v14 & 0xC0) != 0x80))
					{
						++DeviceID;
						--v7;
						continue;
					}
					DeviceID += 3;
					v11 = v14 & 0x3F | (((unsigned __int16)(v10 << 6) | v13 & 0x3F) << 6);
					v7 -= 3i64;
				}
			}
			else
			{
				++DeviceID;
				v11 = v10;
				--v7;
			}
			if (v9 == 512)
				break;
			v39.m128i_i16[v9++] = v11;
			if (!v11)
				break;
		} while (v7);
	}
LABEL_31:
	if (!v39.m128i_i16[0])
		return 0i64;
	v16 = 0;
	v17 = CoInitialize(0i64);
	ppv = 0i64;
	if (CoCreateInstance(&stru_140B61178, 0i64, 1u, &stru_140B61168, &ppv) < 0)
		goto LABEL_70;
	if (ppv)
	{
		v32 = 0i64;
		v18 = SysAllocString(L"\\\\.\\root\\cimv2");
		if ((*(int(__fastcall**)(LPVOID, OLECHAR*, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, __int64*))(*(_QWORD*)ppv + 24i64))(
			ppv,
			v18,
			0i64,
			0i64,
			0i64,
			0,
			0i64,
			0i64,
			&v32) < 0)
		{
		LABEL_65:
			v19 = v32;
			goto LABEL_66;
		}
		v19 = v32;
		if (!v32)
		{
		LABEL_66:
			if (v18)
			{
				SysFreeString(v18);
				v19 = v32;
			}
			if (v19)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
		LABEL_70:
			if (ppv)
			{
				(*(void(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
				ppv = 0i64;
			}
			goto LABEL_72;
		}
		v20 = sub_140193770((__int64)L"ole32.dll");
		v21 = v20;
		if (v20)
		{
			CoSetProxyBlanket = (HRESULT(__stdcall*)(IUnknown*, DWORD, DWORD, OLECHAR*, DWORD, DWORD, RPC_AUTH_IDENTITY_HANDLE, DWORD))GetProcAddress(v20, "CoSetProxyBlanket");
			if (CoSetProxyBlanket)
				((void(__fastcall*)(__int64, __int64, _QWORD))CoSetProxyBlanket)(v32, 10i64, 0i64);
			FreeLibrary(v21);
		}
		v33 = 0i64;
		v23 = SysAllocString(L"Win32_VideoController");
		if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, _QWORD, __int64*))(*(_QWORD*)v32 + 144i64))(
			v32,
			v23,
			0i64,
			0i64,
			&v33) >= 0)
		{
			v24 = v33;
			if (!v33)
			{
			LABEL_61:
				if (v23)
				{
					SysFreeString(v23);
					v24 = v33;
				}
				if (v24)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
				goto LABEL_65;
			}
			memset(v37, 0, sizeof(v37));
			v31 = 0;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 24i64))(v33);
			if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64*, unsigned int*))(*(_QWORD*)v33 + 32i64))(
				v33,
				5000i64,
				10i64,
				v37,
				&v31) >= 0)
			{
				v25 = 0;
				if (v31)
				{
					while (1)
					{
						v26 = 0;
						v27 = SysAllocString(L"PNPDeviceID");
						if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, VARIANTARG*, _QWORD, _QWORD))(*(_QWORD*)v37[v25]
							+ 32i64))(
								v37[v25],
								v27,
								0i64,
								&pvarg,
								0i64,
								0i64) >= 0)
							v26 = sub_1407DF6E0((const __m128i*)pvarg.llVal, &v39) != 0i64;
						VariantClear(&pvarg);
						if (v27)
							SysFreeString(v27);
						if (v26)
							break;
						if (++v25 >= v31)
							goto LABEL_56;
					}
					v28 = SysAllocString(L"AdapterRAM");
					if ((*(int(__fastcall**)(__int64, OLECHAR*, _QWORD, VARIANTARG*, _QWORD, _QWORD))(*(_QWORD*)v37[v25]
						+ 32i64))(
							v37[v25],
							v28,
							0i64,
							&pvarg,
							0i64,
							0i64) >= 0)
					{
						v16 = 1;
						*v35 = pvarg.lVal;
					}
					VariantClear(&pvarg);
					if (v28)
						SysFreeString(v28);
				}
			LABEL_56:
				for (j = 0; j < v31; ++j)
				{
					v30 = v37[j];
					if (v30)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
						v37[j] = 0i64;
					}
				}
			}
		}
		v24 = v33;
		goto LABEL_61;
	}
LABEL_72:
	if (v17 >= 0)
		CoUninitialize();
	return v16;
}
// 140AE5998: using guessed type wchar_t aOle32Dll_1[10];
// 140268830: using guessed type __m128i var_430;

