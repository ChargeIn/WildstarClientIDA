//----- (00000001406163A0) ----------------------------------------------------
__int64 __fastcall sub_1406163A0(__int64 a1, __int64 a2)
{
	int v3; // edi
	__int64 v4; // rcx
	int v6; // eax
	int v7; // ecx
	unsigned int v8; // edx
	int v9; // eax
	int v10; // ecx
	unsigned int i; // ebp
	__int64 v12; // rcx
	__int64 v13; // rbp
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int16* v22; // rax
	int* v23; // r8
	char v25[40]; // [rsp+30h] [rbp-28h] BYREF
	unsigned int v26; // [rsp+60h] [rbp+8h] BYREF
	int v27; // [rsp+64h] [rbp+Ch]

	v3 = 0;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 16);
	v4 = a1 + 40;
	*(_DWORD*)(v4 - 12) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(v4 - 8) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(v4 - 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(v4 - 24) = *(_DWORD*)(a2 + 32);
	v6 = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(v4 + 64) = 0;
	*(_DWORD*)(v4 - 40) = v6;
	sub_140008410(v4);
	sub_140008410(a1 + 72);
	v7 = dword_140C636A8;
	if (!*(_DWORD*)(a1 + 12))
		*(_DWORD*)(a1 + 12) = dword_140C636A8 - *(_DWORD*)(a2 + 44);
	v8 = *(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64);
	if (v8 <= 8 && (v9 = 332, _bittest(&v9, v8)) && *(_DWORD*)a1 == 3)
	{
		v10 = v7 - *(_DWORD*)(a2 + 28);
		*(_DWORD*)(a1 + 4) = 0;
		*(_DWORD*)(a1 + 8) = v10;
	}
	else
	{
		*(_DWORD*)(a1 + 8) = v7;
		*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 28);
	}
	for (i = 0; i < *(_DWORD*)(a2 + 4); ++i)
	{
		v12 = *(_QWORD*)(a2 + 8);
		v26 = *(_DWORD*)(v12 + 8i64 * i);
		v27 = *(_DWORD*)(v12 + 8i64 * i + 4);
		sub_140617D30(a1 + 40, (__int64)v25, &v26);
	}
	if (*(_DWORD*)(a1 + 160))
	{
		v13 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 24));
		if (v13)
		{
			v14 = *(_QWORD*)(a1 + 152);
			if (*(_DWORD*)a1 == 3)
			{
				switch (*(_DWORD*)(v14 + 4))
				{
				case 0:
				case 2:
					v18 = *(_QWORD*)(qword_140C65898 + 7152);
					if (v18 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18) == 166)
					{
						v3 = dword_140B277E0[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					else
					{
						v3 = dword_140B274C0[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					break;
				case 1:
				case 3:
					v15 = *(_QWORD*)(qword_140C65898 + 7152);
					if (v15 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v15 + 24i64))(v15) == 166)
					{
						v3 = dword_140B276A0[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					else
					{
						v3 = dword_140B27548[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					break;
				case 4:
					v20 = *(_QWORD*)(qword_140C65898 + 7152);
					if (!v20 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20) != 166)
					{
						v3 = dword_140B27520[(unsigned int)sub_1401AE6F0(0, 9)];
						goto LABEL_34;
					}
					v3 = dword_140B27618[(unsigned int)sub_1401AE6F0(0, 9)];
					sub_1406177C0((_QWORD*)a1);
					break;
				case 5:
				case 6:
					v19 = *(_QWORD*)(qword_140C65898 + 7152);
					if (v19 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 24i64))(v19) == 166)
					{
						v3 = dword_140B276B8[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					else
					{
						v3 = dword_140B275C0[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					break;
				case 7:
				case 8:
					v17 = *(_QWORD*)(qword_140C65898 + 7152);
					if (v17 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17) == 166)
					{
						v3 = dword_140B277C8[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					else
					{
						v3 = dword_140B27438[(unsigned int)sub_1401AE6F0(0, 4)];
						sub_1406177C0((_QWORD*)a1);
					}
					break;
				default:
				LABEL_34:
					sub_1406177C0((_QWORD*)a1);
					break;
				}
			}
			else
			{
				if (*(_DWORD*)(v14 + 4) != 4 || *(_DWORD*)a1 != 1)
					return 0i64;
				v21 = *(_QWORD*)(qword_140C65898 + 7152);
				if (v21 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v21 + 24i64))(v21) == 166)
					v3 = dword_140B27640[(unsigned int)sub_1401AE6F0(0, 4)];
				else
					v3 = dword_140B274D8[(unsigned int)sub_1401AE6F0(0, 4)];
			}
			if (v3)
			{
				v22 = sub_14034BDD0(v16, v3);
				if (v22)
				{
					v23 = (int*)&word_140B7B704;
					if (*(_QWORD*)(v13 + 16))
						v23 = *(int**)(v13 + 16);
					sub_140003890((__int64*)qword_140C658A0, 0x14u, 0i64, (int*)v22, *(_DWORD*)(v13 + 8), v23);
				}
				sub_140472ED0(v13, v3);
			}
		}
	}
	return 0i64;
}
// 14061672C: variable 'v16' is possibly undefined
// 140B27438: using guessed type int dword_140B27438[6];
// 140B274C0: using guessed type int dword_140B274C0[6];
// 140B274D8: using guessed type int dword_140B274D8[6];
// 140B27520: using guessed type int dword_140B27520[10];
// 140B27548: using guessed type int dword_140B27548[6];
// 140B275C0: using guessed type int dword_140B275C0[6];
// 140B27618: using guessed type int dword_140B27618[10];
// 140B27640: using guessed type int dword_140B27640[6];
// 140B276A0: using guessed type int dword_140B276A0[6];
// 140B276B8: using guessed type int dword_140B276B8[6];
// 140B277C8: using guessed type int dword_140B277C8[6];
// 140B277E0: using guessed type int dword_140B277E0[6];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1406163A0: using guessed type char var_28[40];

