//----- (000000014043E960) ----------------------------------------------------
void __fastcall sub_14043E960(__int64 a1, int a2)
{
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r14
	int* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // r14
	int* v16; // rax
	__int64 v17; // rax
	unsigned int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rdx
	int* v22; // rax
	int* v23; // rdi
	unsigned int v24; // eax
	__int64 v25; // rdi
	int v26; // ebx
	unsigned int v27; // eax
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rbx
	__int64 v32; // rax
	unsigned int v33; // eax
	_QWORD v34[2]; // [rsp+20h] [rbp-28h] BYREF
	char v35[24]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v36; // [rsp+50h] [rbp+8h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1);
	v5 = v4;
	if (v4)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		if (v6 && *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6))
		{
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 312i64))(a1);
			if (v7)
			{
				if (v7 == 1)
				{
					if (a2)
					{
						if (a2 == 1)
							sub_1404B5C70((unsigned int)(a2 - 1), a1);
					}
					else
					{
						sub_1404B5B00((unsigned int)a2, a1);
					}
				}
			}
			else if (a2)
			{
				if (a2 == 1)
				{
					v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1);
					v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8);
					v10 = v9;
					if (v9)
					{
						if (*(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9))
						{
							v11 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10);
							v12 = sub_1405B15C0((__int64)&qword_140C7DFB0, *v11);
							if (v12)
								sub_1405AD7B0(v12, a1);
						}
					}
				}
			}
			else
			{
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1);
				v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 32i64))(v13);
				v15 = v14;
				if (v14)
				{
					if (*(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 32i64))(v14))
					{
						v16 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 32i64))(v15);
						v17 = sub_1405B15C0((__int64)&qword_140C7DFB0, *v16);
						if (v17)
							sub_1405AD6E0(v17, a1);
					}
				}
			}
		}
		v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 216i64))(v5);
		v19 = *(_QWORD*)(qword_140C65BA8 + 264);
		v20 = v19;
		v21 = *(_QWORD*)(v19 + 8);
		while (v21)
		{
			if (*(_DWORD*)(v21 + 32) < v18)
			{
				v21 = *(_QWORD*)(v21 + 24);
			}
			else
			{
				v20 = v21;
				v21 = *(_QWORD*)(v21 + 16);
			}
		}
		if (v20 == v19 || (v36 = v20, v18 < *(_DWORD*)(v20 + 32)))
			v36 = v19;
		if (v36 != v19)
		{
			if (!a2)
			{
			LABEL_33:
				v22 = sub_14018B280(24i64, 0);
				v23 = v22;
				if (v22)
				{
					*(_QWORD*)v22 = a1;
					*((_QWORD*)v22 + 1) = 0i64;
					v22[4] = 0;
				}
				else
				{
					v23 = 0i64;
				}
				LODWORD(v34[0]) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 216i64))(v5);
				v34[1] = v23;
				sub_140055F80(qword_140C65898 + 29448, (__int64)v35, v34);
				v32 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1);
				(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64, __int64, int, int, _DWORD*), int*))(*(_QWORD*)v32 + 648i64))(
					v32,
					sub_14043F310,
					v23);
				v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 216i64))(v5);
				sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 256, v33);
				return;
			}
			if (a2 <= 0)
				return;
			if (a2 > 2)
			{
				if (a2 != 3)
					return;
				goto LABEL_33;
			}
			v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 216i64))(v5);
			v25 = qword_140C65BA8;
			v26 = v24;
			sub_1405FAC80(qword_140C65BA8, v24);
			sub_1405FADE0(v25, v26);
			sub_1405FA3B0(v25);
			v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 216i64))(v5);
			v28 = *(_QWORD*)(qword_140C65898 + 29456);
			v29 = v28;
			v30 = *(_QWORD*)(v28 + 8);
			while (v30)
			{
				if (*(_DWORD*)(v30 + 32) < v27)
				{
					v30 = *(_QWORD*)(v30 + 24);
				}
				else
				{
					v29 = v30;
					v30 = *(_QWORD*)(v30 + 16);
				}
			}
			if (v29 == v28 || (v36 = v29, v27 < *(_DWORD*)(v29 + 32)))
				v36 = v28;
			if (v36 != v28)
			{
				v31 = *(_QWORD*)(v36 + 40);
				sub_14043F540(qword_140C65898 + 29448, &v36);
				if (v31)
					sub_14018B900(v31, 0);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 14043E960: using guessed type char var_18[24];

