//----- (00000001406EF2B0) ----------------------------------------------------
__int64 __fastcall sub_1406EF2B0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebp
	_QWORD* v6; // rax
	__int64 v7; // rdx
	unsigned int v8; // ebx
	unsigned int v9; // esi
	unsigned int* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	_QWORD* v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // r8
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]
	_QWORD* v19; // [rsp+30h] [rbp-18h]
	int v20; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v19 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v17 = off_140B569F0;
	v20 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v18 = v5;
	if (qword_140C65970 && qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120))
	{
		if (*(_DWORD*)(qword_140C65970 + 8) == 2)
		{
			v8 = 0;
			v9 = sub_140221570();
			if (v9)
			{
				do
				{
					v10 = (unsigned int*)sub_140221620(v8);
					if (v10)
					{
						v12 = sub_1406F1910(v11, *v10);
						if (v12)
						{
							if ((unsigned int)sub_1406F1A20(v1, v12))
							{
								sub_1400FB470((__int64)&v17);
								v1 = v19;
								v19[2] -= 16i64;
							}
						}
					}
					++v8;
				} while (v8 < v9);
				v5 = v18;
			}
			v13 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
			v7 = v1[2];
			*(_QWORD*)v7 = *v13;
			*(_DWORD*)(v7 + 8) = *((_DWORD*)v13 + 2);
		}
		else
		{
			v6 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
			v7 = v1[2];
			*(_QWORD*)v7 = *v6;
			*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
		}
	}
	else
	{
		v14 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v15 = v1[2];
		*(_QWORD*)v15 = *v14;
		v7 = *((unsigned int*)v14 + 2);
		*(_DWORD*)(v15 + 8) = v7;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v7, v5);
	return 1i64;
}
// 1406EF39E: variable 'v11' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

