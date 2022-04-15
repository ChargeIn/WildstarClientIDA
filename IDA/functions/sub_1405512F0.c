//----- (00000001405512F0) ----------------------------------------------------
void __fastcall sub_1405512F0(__int64 a1, int a2, unsigned int a3)
{
	unsigned int v3; // eax
	__int64 v6; // r15
	int* v7; // rax
	__int64 v8; // r14
	int v9; // r12d
	unsigned int v10; // r13d
	int* v11; // rbx
	__int64 v12; // rcx
	unsigned int v13; // eax
	char* v14; // rax
	unsigned __int64 v15; // rax
	__int64 v16; // rdx
	int v17; // edx
	__int16* v18; // rax
	char* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rcx
	int v22; // [rsp+20h] [rbp-60h]
	int v23; // [rsp+28h] [rbp-58h]
	char v24[8]; // [rsp+30h] [rbp-50h] BYREF
	int* v25; // [rsp+38h] [rbp-48h]
	int* v26; // [rsp+40h] [rbp-40h]
	int* v27; // [rsp+48h] [rbp-38h]
	__int64 v28; // [rsp+50h] [rbp-30h] BYREF
	__int64 v29; // [rsp+58h] [rbp-28h]

	v3 = *(_DWORD*)(a1 + 16);
	if (a3 != v3 && a3 <= v3)
	{
		v6 = *(_QWORD*)(a1 + 8i64 * a3 + 24);
		if (v6)
		{
			if ((*(_BYTE*)(v6 + 8) & 8) == 0)
			{
				v7 = sub_14018B280(16i64, 0);
				v25 = v7;
				v26 = v7;
				v27 = v7 + 4;
				if (v7)
					*(_WORD*)v7 = 0;
				sub_140551D40(a1, a3, (__int64)v24, 1);
				v8 = (__int64)v25;
				if ((((char*)v26 - (char*)v25) & 0xFFFFFFFFFFFFFFFEui64) == 0)
					goto LABEL_36;
				v9 = sub_140551840(a1, a3);
				v10 = sub_1405515C0(a1, a3);
				v11 = sub_14018B280(2i64, 0);
				v25 = v11;
				v27 = (int*)((char*)v11 + 2);
				sub_1407DB590(v11, dword_1409F27C4, 0i64);
				v26 = v11;
				if (v11)
					*(_WORD*)v11 = 0;
				if ((int)v10 >= v9)
				{
					v18 = sub_14034BDD0(v12, 472);
					v19 = (char*)sub_14018EFA0(&v28, (__int64)L"%s (%s)", v8, v18);
					if (v19 != v24)
					{
						sub_14001C480((__int64)v24, *((int**)v19 + 1), *((int**)v19 + 2));
						v11 = v25;
					}
					if (v29)
						sub_14018B900(v29, 0);
					if (*(_DWORD*)(v6 + 4) == 5)
					{
						v17 = 27;
					}
					else
					{
						v17 = 122;
						if (!*(_DWORD*)(*(_QWORD*)(a1 + 8) + 288i64))
							v17 = 26;
					}
				}
				else
				{
					if (sub_140553750(a1, a3))
					{
						v22 = v9;
						v14 = (char*)sub_14018EFA0(&v28, (__int64)L"%s (%d/%d)", v8, v10, v22);
					}
					else
					{
						v13 = sub_140551630(a1, a3);
						v14 = (char*)sub_14018EFA0(&v28, (__int64)L"%s (%d%%)", v8, v13);
					}
					if (v14 != v24)
					{
						sub_14001C480((__int64)v24, *((int**)v14 + 1), *((int**)v14 + 2));
						v11 = v25;
					}
					if (v29)
						sub_14018B900(v29, 0);
					v15 = *(unsigned int*)(v6 + 4);
					if ((unsigned int)v15 > 0x22)
						goto LABEL_30;
					v16 = 0x500000010i64;
					if (!_bittest64(&v16, v15))
						goto LABEL_30;
					v17 = 25;
				}
				sub_140051AF0(1, v17);
			LABEL_30:
				v20 = *(_QWORD*)(qword_140C65898 + 120);
				if (v20)
				{
					v21 = *(_QWORD*)(qword_140C65898 + 29504);
					if ((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) & 0x80000) != 0)
					{
						v23 = a2;
						sub_1400EA3E0(v21, "ContractFloater", byte_1409E9544, *(unsigned int*)(v20 + 8), v11, v23);
					}
					else
					{
						sub_140430B90(v21, *(_DWORD*)(v20 + 8), (__int64)v11, a2);
					}
				}
				if (v11)
					sub_14018B900((__int64)v11, 0);
			LABEL_36:
				if (v8)
					sub_14018B900(v8, 0);
			}
		}
	}
}
// 1405514A7: variable 'v12' is possibly undefined
// 1409E9544: using guessed type _BYTE byte_1409E9544[32];
// 1409F27C4: using guessed type int dword_1409F27C4[8];
// 140B1E1D8: using guessed type wchar_t aSDD[11];
// 140B1E1F0: using guessed type wchar_t aSD_7[10];
// 140B1E5F8: using guessed type wchar_t aSS_18[8];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405512F0: using guessed type char var_50[8];

