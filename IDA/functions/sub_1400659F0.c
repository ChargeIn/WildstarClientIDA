//----- (00000001400659F0) ----------------------------------------------------
__int64 __fastcall sub_1400659F0(__int64* a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rbx
	int v5; // r10d
	__int64 v6; // rdi
	unsigned int v9; // r9d
	unsigned __int8* v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rcx
	const char* v13; // rax
	__int64 result; // rax
	__int64 v15; // rcx
	char v16; // dl
	__int64 v17; // rcx

	v3 = *a1;
	v5 = *(unsigned __int8*)(*a1 + 112);
	v6 = *(int*)(*a1 + 72);
	v9 = 0;
	if (*(_BYTE*)(*a1 + 112))
	{
		v10 = (unsigned __int8*)a1 + 76;
		while (*(v10 - 1) != *a3 || *v10 != a3[2])
		{
			++v9;
			v10 += 2;
			if ((int)v9 >= v5)
				goto LABEL_6;
		}
		return v9;
	}
	else
	{
	LABEL_6:
		if (v5 + 1 > 60)
		{
			v11 = *(unsigned int*)(v3 + 96);
			v12 = a1[4];
			if ((_DWORD)v11)
				v13 = (const char*)sub_14005B130(
					v12,
					(unsigned __int64*)"function at line %d has more than %d %s",
					v11,
					60i64,
					aUpvalues);
			else
				v13 = (const char*)sub_14005B130(
					v12,
					(unsigned __int64*)"main function has more than %d %s",
					60i64,
					aUpvalues);
			sub_140062CF0(a1[3], v13, 0);
		}
		if (v5 + 1 > (int)v6)
			*(_QWORD*)(v3 + 56) = sub_140064690(
				a1[4],
				*(_QWORD*)(v3 + 56),
				(int*)(v3 + 72),
				8ui64,
				2147483645,
				(char*)&unk_140C63643);
		if ((int)v6 < *(_DWORD*)(v3 + 72))
		{
			v15 = 8 * v6;
			do
			{
				LODWORD(v6) = v6 + 1;
				v15 += 8i64;
				*(_QWORD*)(v15 + *(_QWORD*)(v3 + 56) - 8) = 0i64;
			} while ((int)v6 < *(_DWORD*)(v3 + 72));
		}
		*(_QWORD*)(*(_QWORD*)(v3 + 56) + 8i64 * *(unsigned __int8*)(v3 + 112)) = a2;
		if ((*(_BYTE*)(a2 + 9) & 3) != 0)
		{
			v16 = *(_BYTE*)(v3 + 9);
			if ((v16 & 4) != 0)
			{
				v17 = *(_QWORD*)(a1[4] + 32);
				if (*(_BYTE*)(v17 + 33) == 1)
					sub_14005C960(v17, a2);
				else
					*(_BYTE*)(v3 + 9) = v16 & 0xF8 | *(_BYTE*)(v17 + 32) & 3;
			}
		}
		*((_BYTE*)a1 + 2 * *(unsigned __int8*)(v3 + 112) + 75) = *(_BYTE*)a3;
		*((_BYTE*)a1 + 2 * *(unsigned __int8*)(v3 + 112) + 76) = *((_BYTE*)a3 + 8);
		result = *(unsigned __int8*)(v3 + 112);
		*(_BYTE*)(v3 + 112) = result + 1;
	}
	return result;
}

