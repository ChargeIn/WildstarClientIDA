//----- (00000001403A1840) ----------------------------------------------------
void __fastcall sub_1403A1840(__int64 a1, _DWORD* a2)
{
	unsigned int v2; // edi
	__int64 v4; // rcx
	BOOL v5; // ebp
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rbx
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax
	unsigned int v12; // edx
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	if (a2)
	{
		v2 = a2[28];
		v4 = *(_QWORD*)(a1 + 27952);
		v5 = *a2 == 2;
		v6 = *(_QWORD*)(v4 + 8);
		v7 = v4;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < v2)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v7 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v7 == v4 || (v13 = v7, v2 < *(_DWORD*)(v7 + 32)))
			v13 = v4;
		v8 = v13;
		if (v13 != v4)
		{
			v9 = *(_QWORD*)(v13 + 40);
			if (v9)
				sub_1403A1940(v9);
			v13 = v8;
			sub_1403AE200(a1 + 27944, &v13);
		}
		if (v5)
		{
			v10 = dword_140C45E40;
			if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
				v10 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C45E50 + v10))
			{
				v11 = sub_1403C1FD0(a1, v2, *(_BYTE*)(a1 + 28140));
				sub_1403BD3D0(a1, v12, v11);
			}
		}
	}
}
// 1403A192E: variable 'v12' is possibly undefined
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;

