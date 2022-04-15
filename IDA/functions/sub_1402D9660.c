//----- (00000001402D9660) ----------------------------------------------------
__int64 __fastcall sub_1402D9660(_QWORD* a1, unsigned __int64 a2)
{
	char* v2; // rbx
	__int64 result; // rax
	char* v5; // rbp
	__int64 v6; // r15
	__int64 v7; // rsi
	int* v8; // rax
	int* v9; // r14
	signed __int64 v10; // rdx
	char* v11; // rcx
	__int64 v12; // rcx

	v2 = (char*)a1[1];
	result = 0x4924924924924925i64 * (a1[3] - (_QWORD)v2);
	if ((a1[3] - (_QWORD)v2) / 28i64 < a2)
	{
		v5 = (char*)a1[2];
		v6 = 7 * a2;
		v7 = (v5 - v2) / 28;
		v8 = sub_14018B280(28 * a2, 0);
		v9 = v8;
		if (v2 != v5)
		{
			v10 = (char*)v8 - v2;
			do
			{
				v11 = &v2[v10];
				if (&v2[v10])
				{
					*(_DWORD*)v11 = *(_DWORD*)v2;
					*((_DWORD*)v11 + 1) = *((_DWORD*)v2 + 1);
					*((_DWORD*)v11 + 2) = *((_DWORD*)v2 + 2);
					*((_DWORD*)v11 + 3) = *((_DWORD*)v2 + 3);
					*((_DWORD*)v11 + 4) = *((_DWORD*)v2 + 4);
					*((_DWORD*)v11 + 5) = *((_DWORD*)v2 + 5);
					*((_DWORD*)v11 + 6) = *((_DWORD*)v2 + 6);
				}
				v2 += 28;
			} while (v2 != v5);
		}
		v12 = a1[1];
		if (v12)
			sub_14018B900(v12, 0);
		result = (__int64)&v9[v6];
		a1[1] = v9;
		a1[3] = &v9[v6];
		a1[2] = &v9[7 * v7];
	}
	return result;
}

