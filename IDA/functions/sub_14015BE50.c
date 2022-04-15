//----- (000000014015BE50) ----------------------------------------------------
__int64 __fastcall sub_14015BE50(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	int v9; // edi
	__int64 v10; // rdx
	int v11; // r8d
	int* i; // rax
	int v13; // ecx
	__int64 v14; // rbp
	__int64 v15; // r9
	__int64 v16; // rcx
	__int64 v17; // rdx
	int* v18; // rdx
	__int64 v19; // r8
	char* v20; // rcx
	int* v21; // rbx
	__int64 v22; // rax
	int v23; // [rsp+20h] [rbp-48h]
	int v24[2]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v25; // [rsp+38h] [rbp-30h] BYREF
	int* v26; // [rsp+40h] [rbp-28h]
	__int64 v27; // [rsp+48h] [rbp-20h]
	__int64 v28; // [rsp+50h] [rbp-18h]

	if (!sub_140001D30(a1, a3))
		return sub_1400D2120(a1, a2, a3, a4);
	v9 = 0;
	v10 = (__int64)(*(_QWORD*)(a1 + 1056) - *(_QWORD*)(a1 + 1048)) >> 4;
	if ((int)v10 > 0)
	{
		v11 = *a3;
		for (i = *(int**)(a1 + 1048); ; i += 4)
		{
			if (v11 >= *i && v11 < i[2])
			{
				v13 = a3[1];
				if (v13 >= i[1] && v13 < i[3])
					break;
			}
			if (++v9 >= (int)v10)
				return 0i64;
		}
		if (v9 >= 0)
		{
			v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1032) + 40i64) + 8i64 * v9);
			v15 = *(_QWORD*)(v14 + 224);
			if (v15)
			{
				v16 = *(_QWORD*)(a1 + 32);
				v17 = *(_QWORD*)(a1 + 16);
				v24[0] = *(_DWORD*)(*(_QWORD*)(a1 + 1048) + 16i64 * v9);
				v24[1] = *(_DWORD*)(a1 + 728);
				sub_1400ECF40(v16, v17, v24, v15, *(_DWORD*)(a1 + 808));
			}
			else
			{
				v26 = sub_14018B280(15i64, 0);
				v28 = (__int64)v26 + 15;
				sub_1407DB590(v26, (int*)"MenuSelection_", 0xEui64);
				v27 = (__int64)v26 + 14;
				if (v26 != (int*)-14i64)
					*((_BYTE*)v26 + 14) = 0;
				v18 = *(int**)(v14 + 136);
				v19 = -1i64;
				do
					++v19;
				while (*((_BYTE*)v18 + v19));
				sub_14001B050(&v25, v18, (int*)((char*)v18 + v19));
				v20 = *(char**)(a1 + 16);
				v21 = v26;
				v22 = *(_QWORD*)(v14 + 136);
				if (v20)
				{
					v23 = v9;
					sub_1400D4040((__int64)v20, (char*)v26, v20, byte_1409DC08C, v23, v22);
				}
				else
				{
					sub_1400EA3E0(*(_QWORD*)(a1 + 32), v26, byte_1409DC064, (unsigned int)v9, v22);
				}
				if (v21)
					sub_14018B900((__int64)v21, 0);
			}
		}
	}
	return 0i64;
}
// 1409DC064: using guessed type _BYTE byte_1409DC064[40];
// 1409DC08C: using guessed type _BYTE byte_1409DC08C[24];

