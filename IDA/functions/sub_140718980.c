//----- (0000000140718980) ----------------------------------------------------
void __fastcall sub_140718980(__int64 a1)
{
	__int64 v1; // r14
	__int64 v2; // rbp
	__int64 v3; // rdi
	__int64 v5; // rsi
	int v6; // eax
	unsigned int* v7; // rsi
	unsigned __int64 i; // rdi
	__int64 v9; // rax
	int v10; // edx
	__int64 v11; // rcx
	__int64 v12; // r8
	unsigned int v13; // ecx
	unsigned int v14; // eax
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	__int64 v16; // [rsp+28h] [rbp-10h]

	v1 = 0i64;
	v2 = 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	v15 = 0i64;
	v16 = 0i64;
	if (v3)
	{
		do
		{
			v5 = *(_QWORD*)(v3 + 16);
			if (*(_QWORD*)(v3 + 208))
				v6 = sub_140195F70(v3 + 192);
			else
				v6 = 0;
			*(_DWORD*)(v3 + 108) = v6;
			sub_140718BD0(&v15, (_QWORD*)(v3 + 96));
			(**(void(__fastcall***)(__int64, __int64))v3)(v3, 1i64);
			v3 = v5;
		} while (v5);
		v2 = v16;
		v1 = v15;
	}
	*(_DWORD*)(a1 + 72) = 0;
	if (v2)
	{
		v7 = (unsigned int*)v1;
		do
		{
			for (i = 0i64; i < *(unsigned int*)(a1 + 80); ++i)
				sub_140718120(a1, v7);
			v7 += 20;
			--v2;
		} while (v2);
	}
	v9 = *(_QWORD*)(a1 + 96);
	if (v9)
	{
		v10 = dword_140C636A8;
		*(_DWORD*)(a1 + 48) = dword_140C636A8;
		*(_DWORD*)(v9 + 32) = v10;
		*(_DWORD*)(*(_QWORD*)(a1 + 96) + 36i64) = *(_DWORD*)(a1 + 72);
		v11 = *(_QWORD*)(a1 + 56);
		v12 = *(_QWORD*)(*(_QWORD*)(v11 + 312) + 112i64);
		if (*(_DWORD*)(v12 + 24) == 10)
		{
			v13 = *(_DWORD*)(v12 + 32) + *(_DWORD*)(v11 + 404) - v10;
			if (v13)
			{
				v14 = *(_DWORD*)(a1 + 72);
				if (v14 != -1 && v13 < v14)
					v13 = *(_DWORD*)(a1 + 72);
				*(_DWORD*)(*(_QWORD*)(a1 + 96) + 36i64) = v13;
			}
		}
	}
	if (!*(_DWORD*)(a1 + 72))
		sub_140717F00(a1, -*(_DWORD*)(a1 + 80));
	if (v1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v1 - 16) + 8i64))(v1 - 16);
}
// 140C636A8: using guessed type int dword_140C636A8;

