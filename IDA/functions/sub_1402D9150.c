//----- (00000001402D9150) ----------------------------------------------------
__int64 __fastcall sub_1402D9150(__int64 a1, __int64 a2, __int64 a3, void(__fastcall*** a4)(_QWORD), __int64 a5)
{
	int v5; // esi
	__int64 v8; // rbp
	unsigned int v9; // ebx
	_DWORD* v10; // r8
	_DWORD* v11; // rdx
	__int64 v12; // r10
	int v13; // eax
	__int64 v14; // rax
	_DWORD* v15; // rdx
	_DWORD* v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // r8

	v5 = 0;
	*(_QWORD*)a1 = off_140B62CF8;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)(a1 + 56) = a5;
	*(_DWORD*)(a1 + 64) = 0;
	*(_QWORD*)(a1 + 72) = a2;
	*(_QWORD*)(a1 + 80) = a3;
	*(_QWORD*)(a1 + 88) = a4;
	if (a4)
		(**a4)(a4);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 392i64) + 32 * a2;
	sub_1402D9660((_QWORD*)(a1 + 104), *(unsigned int*)(v8 + 28));
	v9 = 0;
	if (*(_DWORD*)(v8 + 28))
	{
		do
		{
			v10 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 128i64)
				+ 28i64
				* *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 408i64)
					+ 2i64 * (v9 + *(_DWORD*)(v8 + 24))));
			v11 = *(_DWORD**)(a1 + 120);
			if (v11 == *(_DWORD**)(a1 + 128))
			{
				sub_1402D9770(a1 + 104, (__int64)v11, v10);
			}
			else
			{
				if (v11)
				{
					*v11 = *v10;
					v11[1] = v10[1];
					v11[2] = v10[2];
					v11[3] = v10[3];
					v11[4] = v10[4];
					v11[5] = v10[5];
					v11[6] = v10[6];
				}
				*(_QWORD*)(a1 + 120) += 28i64;
			}
			v12 = *(_QWORD*)(a1 + 120);
			++v9;
			v13 = v5 - *(_DWORD*)(v12 - 24);
			*(_DWORD*)(v12 - 24) = v5;
			for (*(_DWORD*)(v12 - 20) += v13; v9 < *(_DWORD*)(v8 + 28); *(_DWORD*)(v12 - 12) = *v16)
			{
				v14 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 128i64)
					+ 28i64
					* *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 408i64) + 2i64 * (v9 + *(_DWORD*)(v8 + 24)));
				if (*(_BYTE*)(v12 - 8) != *(_BYTE*)(v14 + 20)
					|| *(_BYTE*)(v12 - 7) != *(_BYTE*)(v14 + 21)
					|| *(_DWORD*)(v12 - 4) != *(_DWORD*)(v14 + 24)
					|| *(_DWORD*)(v12 - 28) != *(_DWORD*)v14)
				{
					break;
				}
				v15 = (_DWORD*)(v12 - 16);
				*(_DWORD*)(v12 - 20) += *(_DWORD*)(v14 + 8) - *(_DWORD*)(v14 + 4) + 1;
				if (*(_DWORD*)(v14 + 12) < *(_DWORD*)(v12 - 16))
					v15 = (_DWORD*)(v14 + 12);
				*(_DWORD*)(v12 - 16) = *v15;
				v16 = (_DWORD*)(v12 - 12);
				if (*(_DWORD*)(v12 - 12) < *(_DWORD*)(v14 + 16))
					v16 = (_DWORD*)(v14 + 16);
				++v9;
			}
			v5 = *(_DWORD*)(v12 - 20) + 1;
		} while (v9 < *(_DWORD*)(v8 + 28));
		if (*(_DWORD*)(v12 - 20) != -1)
		{
			if (*(_DWORD*)(*(_QWORD*)(a1 + 80) + 56i64) > 0xFFFFu)
			{
				v17 = (unsigned int)(4 * v5);
				v18 = 1i64;
			}
			else
			{
				v17 = (unsigned int)(2 * v5);
				v18 = 0i64;
			}
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
				qword_140C65670,
				v17,
				v18,
				1i64,
				a1 + 96);
		}
	}
	sub_1402D9440((_QWORD*)a1);
	return a1;
}
// 140B62CF8: using guessed type __int64 (__fastcall *off_140B62CF8[31])();
// 140C65670: using guessed type __int64 qword_140C65670;

