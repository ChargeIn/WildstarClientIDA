//----- (0000000140276BB0) ----------------------------------------------------
__int64 __fastcall sub_140276BB0(__int64 a1, __int64 a2)
{
	HMONITOR v4; // r15
	__int64 v5; // rbp
	void(__fastcall * **v6)(__int64, void*, __int64*); // rcx
	unsigned int v7; // ebx
	IDXGIAdapter** v8; // r14
	int v9; // esi
	int v10; // ebx
	__int64 v11; // rcx
	__int64 result; // rax
	void(__fastcall * **v13)(__int64, void*, __int64*); // [rsp+20h] [rbp-B8h] BYREF
	__int64 v14; // [rsp+28h] [rbp-B0h] BYREF
	char v15[88]; // [rsp+30h] [rbp-A8h] BYREF
	HMONITOR v16; // [rsp+88h] [rbp-50h]

	v4 = MonitorFromWindow(*(HWND*)(a2 + 24), 2u);
	v5 = 0i64;
	if (*(_QWORD*)(a1 + 6296))
	{
		while (2)
		{
			v6 = 0i64;
			v7 = 0;
			v8 = (IDXGIAdapter**)(*(_QWORD*)(a1 + 6288) + 8 * v5);
			v13 = 0i64;
			while (1)
			{
				if (v6)
				{
					((void(__fastcall*)(void(__fastcall***)(__int64, void*, __int64*)))(*v6)[2])(v6);
					v13 = 0i64;
				}
				if (((int(__fastcall*)(IDXGIAdapter*, _QWORD, _QWORD))(*v8)->lpVtbl->EnumOutputs)(*v8, v7, &v13) < 0)
					break;
				v9 = ((__int64(__fastcall*)(void(__fastcall***)(__int64, void*, __int64*), char*))(*v13)[7])(v13, v15);
				if (v9 < 0)
					goto LABEL_29;
				if (v16 == v4)
					break;
				v6 = v13;
				++v7;
			}
			if (!v13)
				goto LABEL_21;
			v10 = 0;
			if (!*(_DWORD*)(a1 + 6252) && *(_QWORD*)(a1 + 6336) && *v8 == *(IDXGIAdapter**)(a1 + 6304)
				|| (v14 = 0x141DE2A20i64, sub_1401A3130(14, 2, &v14), v10 = 1, (int)sub_140276DF0(a1, *v8) >= 0))
			{
				v11 = *(_QWORD*)(a1 + 8584);
				if (v11 && (int)sub_14029D2E0(v11, (__int64*)a2) >= 0)
				{
					*(_QWORD*)(a1 + 56) = *(_QWORD*)a2;
					*(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 8);
					*(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 16);
					*(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 24);
					*(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 32);
				}
				else
				{
					if (!v10)
					{
						v14 = 0x141DE2A10i64;
						sub_1401A3130(14, 2, &v14);
					}
					if ((int)sub_140277280((_QWORD*)a1, v13, (_QWORD*)a2) < 0)
						goto LABEL_19;
				}
				*(_DWORD*)(a1 + 6252) = 0;
				v9 = 0;
			LABEL_29:
				if (v13)
					((void(__fastcall*)(void(__fastcall***)(__int64, void*, __int64*)))(*v13)[2])(v13);
				return (unsigned int)v9;
			}
		LABEL_19:
			if (v13)
				((void(__fastcall*)(void(__fastcall***)(__int64, void*, __int64*)))(*v13)[2])(v13);
		LABEL_21:
			if ((unsigned __int64)++v5 < *(_QWORD*)(a1 + 6296))
				continue;
			break;
		}
	}
	if (!*(_QWORD*)(a1 + 6336))
		return 2685272066i64;
	if (!*(_QWORD*)(a1 + 8584))
		return 2685272066i64;
	result = 1i64;
	if (*(int*)(a1 + 6248) < 2)
		return 2685272066i64;
	return result;
}
// 140276BB0: using guessed type char var_A8[88];

