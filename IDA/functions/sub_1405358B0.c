//----- (00000001405358B0) ----------------------------------------------------
__int64 __fastcall sub_1405358B0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdi
	unsigned __int64 v4; // rdx
	_DWORD* v5; // rcx
	int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+28h] [rbp-30h]
	_QWORD* v19; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * *v20)(); // [rsp+38h] [rbp-20h] BYREF
	int v21; // [rsp+40h] [rbp-18h]
	_QWORD* v22; // [rsp+48h] [rbp-10h]

	v3 = sub_14052E9B0(a1);
	if (v3)
	{
		v19 = a1;
		v18 = -2;
		v17 = off_140B56A08;
		sub_1400579E0((__int64)a1, v2, -2);
		v4 = a1[2];
		v5 = dword_140A12138;
		if (a1[3] + 16i64 < v4)
			v5 = (_DWORD*)(v19[3] + 16i64);
		*(_QWORD*)v4 = *(_QWORD*)v5;
		*(_DWORD*)(v4 + 8) = v5[2];
		a1[2] += 16i64;
		v6 = sub_1400578C0((__int64)v19);
		v18 = v6;
		if (v6)
		{
			v8 = *(_QWORD*)(v3 + 1384);
			v9 = *(_QWORD*)(v8 + 16);
			if (v9 != v8)
			{
				do
				{
					v20 = off_140B56A08;
					v22 = v19;
					v21 = -2;
					if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v17[1])(&v17))
					{
						v10 = sub_14005C3C0(*(_QWORD*)(v19[4] + 160i64), v18);
						v12 = *(_QWORD*)(v11 + 16);
						*(_QWORD*)v12 = *v10;
						*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
						*(_QWORD*)(v11 + 16) += 16i64;
						v21 = sub_1400578C0((__int64)v22);
					}
					sub_140774020(v9 + 48, (__int64)&v20);
					v13 = *(_QWORD*)(v9 + 24);
					if (v13)
					{
						v9 = *(_QWORD*)(v9 + 24);
						for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
							v9 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v9 = j;
						if (*(_QWORD*)(v9 + 24) != j)
							v9 = j;
					}
				} while (v9 != *(_QWORD*)(v3 + 1384));
				v6 = v18;
			}
		}
		v17 = off_140B56A08;
		if (v19)
			sub_1400579E0((__int64)v19, v7, v6);
	}
	return 0i64;
}
// 1405358F5: variable 'v2' is possibly undefined
// 1405359A1: variable 'v11' is possibly undefined
// 140535A4D: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

