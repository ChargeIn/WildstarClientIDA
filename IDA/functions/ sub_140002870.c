//----- (0000000140002870) ----------------------------------------------------
__int64 __fastcall sub_140002870(__int64 a1, __m128i* a2, __int64 a3, int a4)
{
	unsigned int v4; // r12d
	__int64 v5; // r13
	__int64 v8; // rcx
	__int64 v9; // r8
	unsigned int v10; // ebp
	DWORD dwNumberOfProcessors; // r12d
	unsigned int v12; // ebx
	_DWORD* v13; // r14
	_DWORD* v14; // rdi
	__int64 v15; // rcx
	_DWORD* v16; // rax
	__int64 v18; // r14
	__int64 i; // rbx
	int* v20; // rax
	int* v21; // rdi
	unsigned __int64 v22; // rbx
	int v23; // eax
	int* v24; // rbx
	int v25; // edi
	void* v26; // xmm1_8
	int v27; // ecx
	_QWORD* v28; // rax
	__int64 v29; // rcx
	_QWORD* v30; // r14
	__int64* v31; // rcx
	__int64 v32; // rax
	unsigned int v33; // edi
	__int64 v34; // rcx
	__int64 v35; // rcx
	char* Error; // rax
	__int64 v37; // r9
	bool v38; // zf
	__int128 TlsValue; // [rsp+20h] [rbp-88h] BYREF
	__int128 v40; // [rsp+30h] [rbp-78h]
	struct _SYSTEM_INFO SystemInfo; // [rsp+40h] [rbp-68h] BYREF
	int* v42; // [rsp+B8h] [rbp+10h] BYREF
	__int64 v43; // [rsp+C0h] [rbp+18h]
	int v44; // [rsp+C8h] [rbp+20h]

	v44 = a4;
	v43 = a3;
	v4 = a4;
	v5 = a3;
	sub_1400020A0(a1);
	if (!a2 || !(unsigned int)sub_1401B58D0(v8, a2, v9))
	{
		*(_DWORD*)(a1 + 64) = 5;
		return 2147500037i64;
	}
	v10 = 0;
	if (!*(_DWORD*)(a1 + 60))
	{
		GetSystemInfo(&SystemInfo);
		dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
		if (SystemInfo.dwNumberOfProcessors > 2)
			dwNumberOfProcessors = 2;
		v12 = 0;
		if (dwNumberOfProcessors)
		{
			v13 = (_DWORD*)(a1 + 28);
			v14 = dword_140C635D0;
			do
			{
				v15 = v12;
				if (v12 < 8)
				{
					v16 = v14;
					while (*v16)
					{
						v15 = (unsigned int)(v15 + 1);
						++v16;
						if ((unsigned int)v15 >= 8)
							goto LABEL_14;
					}
					dword_140C635D0[(unsigned int)v15] = 1;
					*v13 = v15;
					BinkStartAsyncThread(v15, 0i64);
					++* (_DWORD*)(a1 + 60);
				}
			LABEL_14:
				++v12;
				++v14;
				++v13;
			} while (v12 < dwNumberOfProcessors);
			v5 = v43;
		}
		if (!*(_DWORD*)(a1 + 60))
		{
			*(_DWORD*)(a1 + 64) = 5;
			return 2147500037i64;
		}
		v4 = v44;
	}
	sub_14018DD50(&v42, (unsigned __int16*)a2);
	v18 = *(_QWORD*)(a1 + 72);
	for (i = 0i64; a2->m128i_i16[i]; ++i)
		;
	v20 = sub_14018B280(2 * i + 18, 0);
	if (v20)
	{
		*((_QWORD*)v20 + 1) = i;
		*(_QWORD*)v20 = off_140B55060;
	}
	else
	{
		v20 = 0i64;
	}
	v21 = v20 + 4;
	v22 = 2 * i;
	sub_1407DB590(v20 + 4, a2->m128i_i32, v22);
	*(_WORD*)((char*)v21 + v22) = 0;
	*(_QWORD*)(a1 + 72) = v21;
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	v23 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\BinkPS.sho",
		a1 + 480);
	v24 = v42;
	v25 = v23;
	if (v23 < 0)
	{
		*(_QWORD*)&TlsValue = &off_140B5E648;
		*((_QWORD*)&TlsValue + 1) = L"Result";
		*(_QWORD*)&v40 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		*(_QWORD*)&TlsValue = &off_140B5E640;
		DWORD2(v40) = v25;
		v26 = (void*)v40;
		*(_OWORD*)&SystemInfo.dwOemId = TlsValue;
		*(_OWORD*)&SystemInfo.lpMaximumApplicationAddress = v40;
		sub_1400035B0();
		*(_QWORD*)&TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v26);
		goto LABEL_28;
	}
	v30 = (_QWORD*)(a1 + 80);
	if (v5 != a1 + 80)
	{
		*(_QWORD*)(a1 + 88) = 0i64;
		v31 = (__int64*)(a1 + 80);
		if (v5)
		{
			sub_140003500(v31, v5);
		}
		else
		{
			LODWORD(v42) = 0;
			sub_140003460(v31, (int*)&v42);
		}
	}
	BinkSetSoundTrack(*(unsigned int*)(a1 + 88), *v30);
	BinkSetIO(sub_140958C00);
	v32 = BinkOpen(v24, 34620416i64);
	*(_QWORD*)(a1 + 96) = v32;
	if (!v32)
		goto LABEL_28;
	v33 = 0;
	if (*(_QWORD*)(a1 + 88))
	{
		v34 = 0i64;
		do
		{
			BinkSetVolume(*(_QWORD*)(a1 + 96), *(unsigned int*)(*v30 + 4 * v34), v4);
			v34 = ++v33;
		} while ((unsigned __int64)v33 < *(_QWORD*)(a1 + 88));
	}
	v35 = *(_QWORD*)(a1 + 96);
	if (!v35)
	{
		Error = (char*)BinkGetError();
		if (Error)
			sub_14018D320(&v42, Error);
		sub_1400035B0();
		if (v37)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
		goto LABEL_28;
	}
	BinkGetFrameBuffersInfo(v35, a1 + 104);
	if ((int)sub_140002680(a1) < 0)
	{
	LABEL_28:
		if (*(_DWORD*)a1)
		{
			v27 = 0;
			if (*(int*)(a1 + 104) > 0)
			{
				v28 = (_QWORD*)(a1 + 160);
				do
				{
					*(v28 - 4) = 0i64;
					*(v28 - 2) = 0i64;
					*v28 = 0i64;
					v28[2] = 0i64;
					++v27;
					v28 += 8;
				} while (v27 < *(_DWORD*)(a1 + 104));
			}
			*(_DWORD*)a1 = 0;
		}
		sub_140003610((_QWORD*)(a1 + 104));
		v29 = *(_QWORD*)(a1 + 480);
		if (v29)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
			*(_QWORD*)(a1 + 480) = 0i64;
		}
		*(_DWORD*)(a1 + 64) = 5;
		v10 = -2147467259;
		goto LABEL_36;
	}
	v38 = (*(_BYTE*)(*(_QWORD*)(a1 + 96) + 32i64) & 0x10) == 0;
	*(_DWORD*)(a1 + 24) = -1;
	*(_DWORD*)(a1 + 64) = 2;
	*(_DWORD*)(a1 + 20) = !v38;
LABEL_36:
	if (v24)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v24 - 2) + 8i64))(v24 - 4);
	return v10;
}
// 1400028A5: variable 'v8' is possibly undefined
// 1400028A5: variable 'v9' is possibly undefined
// 140002C13: variable 'v37' is possibly undefined
// 140959B68: using guessed type __int64 __fastcall BinkStartAsyncThread(_QWORD, _QWORD);
// 140959BB0: using guessed type __int64 __fastcall BinkSetSoundTrack(_QWORD, _QWORD);
// 140959BB8: using guessed type __int64 __fastcall BinkSetIO(_QWORD);
// 140959BC0: using guessed type __int64 __fastcall BinkSetVolume(_QWORD, _QWORD, _QWORD);
// 140959BC8: using guessed type __int64 __fastcall BinkOpen(_QWORD, _QWORD);
// 140959BD0: using guessed type __int64 BinkGetError(void);
// 140959BD8: using guessed type __int64 __fastcall BinkGetFrameBuffersInfo(_QWORD, _QWORD);
// 1409D01B0: using guessed type wchar_t aShadersBinkpsS[19];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C635D0: using guessed type _DWORD dword_140C635D0[8];
// 140C65670: using guessed type __int64 qword_140C65670;

