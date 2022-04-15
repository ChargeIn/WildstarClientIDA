//----- (00000001409294F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1409294F0(unsigned __int64 a1, __int64* a2, unsigned __int16* a3)
{
	__int64 v3; // r14
	__int64 v4; // r15
	__int64* v5; // r13
	BOOL v6; // esi
	unsigned __int64 v7; // rcx
	int v8; // edi
	unsigned __int16* v10; // rbx
	unsigned __int16* v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	int v15; // edi
	__int64 v16; // rbp
	__int64 v17; // r15
	__int64 v18; // rcx
	__int64 i; // [rsp+50h] [rbp+8h]

	v3 = *a2;
	v4 = a2[1];
	v5 = &a2[(unsigned __int8)a1];
	v6 = 0;
	v7 = a1 >> 8;
	v8 = 0;
	v10 = a3;
	for (i = v5[1]; v8 < v3; v10 += v4)
	{
		if (*v10 == v7)
			break;
		++v8;
	}
	if (v8 < v3)
	{
		v11 = v10;
		if (v10 > a3)
		{
			v12 = 2 * v4;
			v13 = (__int64)(v10 + 1);
			do
			{
				v11 = (unsigned __int16*)((char*)v11 - v12);
				if ((unsigned int)sub_1409198E0(v13, v11 + 1))
					break;
				v14 = 2 * *v11;
				v6 = v5[v14] != i;
				if (v5[v14] != i)
					return v6;
				v12 = 2 * v4;
				v13 = (__int64)(v10 + 1);
			} while (v11 > a3);
		}
		v15 = v8 + 1;
		if (v15 < v3)
		{
			v16 = 2 * v4;
			v17 = (__int64)(v10 + 1);
			do
			{
				v10 = (unsigned __int16*)((char*)v10 + v16);
				if ((unsigned int)sub_1409198E0(v17, v10 + 1))
					break;
				v18 = 2 * *v10;
				v6 = v5[v18] != i;
				if (v5[v18] != i)
					break;
				++v15;
			} while (v15 < v3);
		}
	}
	return v6;
}

