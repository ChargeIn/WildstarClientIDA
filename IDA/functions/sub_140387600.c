//----- (0000000140387600) ----------------------------------------------------
__m128* __fastcall sub_140387600(__int64* a1, __m128* a2, __int64 a3)
{
	__int64 v6; // rbx
	int CurrentThreadId; // r9d
	__int64 v8; // rcx
	bool v9; // zf
	HANDLE EventW; // rcx
	__m128 v11; // xmm0
	__int64* v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rdi
	__int64 v16; // rax
	__m128* result; // rax
	int v18[4]; // [rsp+20h] [rbp-48h] BYREF
	__m128 v19; // [rsp+30h] [rbp-38h] BYREF
	__m128 v20[2]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v21; // [rsp+70h] [rbp+8h] BYREF

	if (a1[181])
	{
		v6 = *a1;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v6 + 48) == CurrentThreadId)
		{
			++* (_QWORD*)(v6 + 56);
		}
		else
		{
			v8 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v8 >= 0x400)
				{
					sub_14019FB60(v6 + 48, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v6 + 48) = CurrentThreadId;
		}
	LABEL_9:
		v9 = a1[181] == 0;
		v18[0] = -1;
		if (!v9)
			sub_14037CC30((__int64)a1, (__int64)v18);
		if (*(_QWORD*)(v6 + 56) <= 1ui64)
		{
			*(_DWORD*)(v6 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v6 + 56), 0i64);
			if (*(_QWORD*)(v6 + 64))
			{
				if (!*(_QWORD*)(v6 + 72))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 72), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v6 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(v6 + 56);
		}
	}
	v11 = *a2;
	v12 = (__int64*)a1[2];
	v21 = 0i64;
	v13 = *v12;
	v19 = _mm_mul_ps(v11, (__m128)xmmword_140B7B450);
	(*(void(__fastcall**)(__int64*, __int64, __int64*, __int64, int))(v13 + 72))(v12, 13i64, &v21, 1i64, v18[0]);
	v14 = v21;
	v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
	v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14);
	result = sub_140251170(v20, v16, *(_DWORD*)(v15 + 44), &v19);
	*(_DWORD*)(a3 + 52) = result->m128_i32[3];
	if (v21)
		return (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	return result;
}
// 140B7B450: using guessed type __int128 xmmword_140B7B450;
// 140387600: using guessed type int var_48[4];
// 140387600: using guessed type __m128 var_28[2];

