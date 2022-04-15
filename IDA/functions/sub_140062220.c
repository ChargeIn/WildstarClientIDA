//----- (0000000140062220) ----------------------------------------------------
char** __fastcall sub_140062220(__int64 a1)
{
	__int64 v2; // r15
	__int64 v3; // r12
	unsigned __int64* v4; // rbp
	unsigned __int64 v5; // rdi
	unsigned int v6; // esi
	unsigned __int64 v7; // rdx
	unsigned __int64 v8; // r8
	int v9; // ecx
	__int64 v10; // r14
	_QWORD* v11; // rbx
	__int64 v12; // rcx
	char** result; // rax

	v2 = 37i64;
	v3 = 17i64;
	do
	{
		v4 = (unsigned __int64*)off_140A12430[v2 - 37];
		v5 = -1i64;
		do
			++v5;
		while (*((_BYTE*)v4 + v5));
		v6 = v5;
		v7 = v5;
		v8 = (v5 >> 5) + 1;
		if (v5 >= v8)
		{
			do
			{
				v9 = *((unsigned __int8*)v4 + v7 - 1);
				v7 -= v8;
				v6 ^= (v6 >> 2) + 32 * v6 + v9;
			} while (v7 >= v8);
		}
		v10 = *(_QWORD*)(a1 + 32);
		v11 = *(_QWORD**)(*(_QWORD*)v10 + 8 * ((int)v6 & (unsigned __int64)(*(_DWORD*)(v10 + 12) - 1)));
		if (v11)
		{
			while (v11[2] != v5 || (unsigned int)sub_1407E6AF0(v4, (__int64)(v11 + 4), v5))
			{
				v11 = (_QWORD*)*v11;
				if (!v11)
					goto LABEL_10;
			}
			if ((*((_BYTE*)v11 + 9) & 3 & (unsigned __int8)~*(_BYTE*)(v10 + 32)) != 0)
				*((_BYTE*)v11 + 9) ^= 3u;
		}
		else
		{
		LABEL_10:
			v11 = sub_140062560(a1, (int*)v4, v5, v6);
		}
		*(_QWORD*)(++v2 * 8 + *(_QWORD*)(a1 + 32) - 8) = v11;
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + v2 * 8 - 8);
		result = off_140A12430;
		*(_BYTE*)(v12 + 9) |= 0x20u;
		--v3;
	} while (v3);
	return result;
}
// 140A12430: using guessed type char *off_140A12430[17];

