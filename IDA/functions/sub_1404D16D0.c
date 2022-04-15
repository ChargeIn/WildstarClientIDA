//----- (00000001404D16D0) ----------------------------------------------------
__int64 __fastcall sub_1404D16D0(__int64 a1, unsigned int* a2, int a3)
{
	__int64 v3; // r11
	__int64 v6; // rax
	__int64 v8; // r9
	__int64 v9; // rbp
	__int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // edx
	__int64 v14; // rdi
	int* v15; // rbx
	int* v16; // rax
	unsigned int v17; // eax
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rcx
	_QWORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
	char v24[16]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v25; // [rsp+70h] [rbp+8h]
	__int64 v26; // [rsp+70h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 16);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = v3;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < *a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v8 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v8 == v3 || (v25 = v8, *a2 < *(_DWORD*)(v8 + 32)))
		v25 = *(_QWORD*)(a1 + 16);
	if (v25 != v3)
	{
		v9 = *(_QWORD*)(v25 + 40);
		if (*(int*)(*(_QWORD*)(v9 + 8) + 4i64) <= 5)
		{
			v10 = *(_QWORD*)(a1 + 160);
			v11 = *(_QWORD*)(v10 + 8);
			v12 = v10;
			if (v11)
			{
				v13 = *a2;
				do
				{
					if (*(_DWORD*)(v11 + 32) < v13)
					{
						v11 = *(_QWORD*)(v11 + 24);
					}
					else
					{
						v12 = v11;
						v11 = *(_QWORD*)(v11 + 16);
					}
				} while (v11);
			}
			if (v12 == v10 || (v26 = v12, *a2 < *(_DWORD*)(v12 + 32)))
				v26 = v10;
			v14 = 0i64;
			if (v26 == v10)
			{
				v16 = sub_14018B280(48i64, 0);
				v15 = v16;
				if (v16)
				{
					*((_QWORD*)v16 + 1) = v9;
					*((_QWORD*)v16 + 3) = 0i64;
					*((_QWORD*)v16 + 2) = 0i64;
					*((_QWORD*)v16 + 4) = 0i64;
					v16[10] = 0;
					*(_QWORD*)v16 = off_140B69028;
				}
				else
				{
					v15 = 0i64;
				}
				v17 = *a2;
				v23[1] = v15;
				LODWORD(v23[0]) = v17;
				sub_140055F80(a1 + 152, (__int64)v24, v23);
			}
			else
			{
				v15 = *(int**)(v26 + 40);
			}
			if ((int)sub_1404D1230((__int64)v15, (__int64)a2) >= 0)
			{
				v18 = *(int*)(*(_QWORD*)(v9 + 8) + 4i64);
				v19 = *(_QWORD*)(a1 + 8 * v18 + 184);
				if (a2[8])
				{
					if (v19)
						v14 = *(_QWORD*)(v19 + 8);
					*(_QWORD*)(a1 + 8 * v18 + 184) = v15;
					if (!a3)
					{
						sub_1404318F0(*(_QWORD*)(qword_140C65898 + 29504), v9, v14);
						v20 = *(_QWORD*)(qword_140C65898 + 32736);
						if (v20)
						{
							if (*(_QWORD*)(v20 + 24) && (unsigned int)sub_1400480B0(v20))
								sub_140435810(v21, v9, v14);
						}
					}
				}
			}
			else
			{
				if (v15)
					(**(void(__fastcall***)(int*, __int64))v15)(v15, 1i64);
				sub_1404D2CB0(a1 + 152, a2);
			}
		}
	}
	return 0i64;
}
// 1404D18AA: variable 'v21' is possibly undefined
// 140B69028: using guessed type __int64 (__fastcall *off_140B69028[22])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404D16D0: using guessed type char var_38[16];

