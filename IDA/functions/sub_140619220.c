//----- (0000000140619220) ----------------------------------------------------
__int64 __fastcall sub_140619220(__int64 a1, __int64* a2)
{
	unsigned __int64 v2; // r15
	__int64 v4; // r12
	int* v6; // rdi
	unsigned __int64 v7; // rsi
	unsigned __int64 v8; // rbx
	int v9; // r8d
	int* v10; // rax
	int* v11; // r14
	unsigned __int64 v12; // r14
	int* v13; // rax
	__int64 v14; // r15
	int* v15; // rdx
	__int64 v16; // r12
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // r12
	__int64 v20; // rbx
	__int64 v21; // r13
	unsigned __int64 v22; // r14
	unsigned __int64 v23; // r14
	__int64 v24; // r12
	int* v25; // rax
	int* v26; // rbx
	int* v27; // rax
	int* v28; // rbx
	unsigned int v29; // ecx
	__int64 v30; // r8
	__int64 v31; // rdx
	int v32; // [rsp+20h] [rbp-58h]
	__int64 v33; // [rsp+20h] [rbp-58h]
	int* v34; // [rsp+28h] [rbp-50h] BYREF
	unsigned __int64 v35; // [rsp+30h] [rbp-48h]
	__int64 v36; // [rsp+38h] [rbp-40h]
	__int64 v37; // [rsp+40h] [rbp-38h] BYREF
	unsigned __int64 v38; // [rsp+48h] [rbp-30h]

	v2 = a2[1];
	v4 = a1;
	v36 = a1;
	if (*(_QWORD*)(a1 + 80) != v2)
		return 2147500037i64;
	v6 = 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v32 = 1;
	v34 = 0i64;
	v35 = 0i64;
	if (!v2)
		goto LABEL_47;
	do
	{
		if (*(_DWORD*)(*(_QWORD*)(v4 + 72) + 4 * v8) == *(_DWORD*)(*a2 + 4 * v8))
		{
			v10 = sub_14018DB00((__int64)v6, v7 + 1, 4i64);
			v10[v7] = 2;
			v11 = v10;
			if (v6 != v10)
			{
				sub_1407DB590(v10, v6, 4 * v7);
				if (v6)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
				v6 = v11;
			}
			v9 = v32;
			v4 = v36;
			++v7;
		}
		else
		{
			v9 = 0;
			v32 = 0;
		}
		++v8;
	} while (v8 < v2);
	v34 = v6;
	v35 = v7;
	if (v9)
	{
	LABEL_47:
		v29 = 0;
		v37 = 0i64;
		v38 = 0i64;
		if (v2)
		{
			v30 = *a2;
			v31 = 0i64;
			do
			{
				++v29;
				*((_DWORD*)&v37 + v31) = *(_DWORD*)(v30 + 4 * v31);
				v31 = v29;
			} while (v29 < v2);
		}
		sub_1403F4900(qword_140C65898, 0x66Au, (__int64)&v37);
		v21 = v36;
	}
	else
	{
		v12 = *(_QWORD*)(v4 + 80);
		v38 = v12;
		if (v12)
		{
			v13 = sub_14018B280(4 * v12 + 16, 0);
			if (v13)
			{
				*((_QWORD*)v13 + 1) = v12;
				v14 = (__int64)(v13 + 4);
				*(_QWORD*)v13 = off_140B55060;
			}
			else
			{
				v14 = 16i64;
			}
		}
		else
		{
			v14 = 0i64;
		}
		v15 = *(int**)(v4 + 72);
		v37 = v14;
		sub_1407DB590((int*)v14, v15, 4 * v12);
		v16 = a2[1];
		v17 = 0i64;
		if (v16)
		{
			do
			{
				if (*(_DWORD*)(*a2 + 4 * v17) == *(_DWORD*)(v14 + 4 * v17))
				{
					sub_1401C2F20((__int64)a2, v17);
					sub_1401C2F20((__int64)&v37, v17);
					v14 = v37;
				}
				else
				{
					++v17;
				}
				--v16;
			} while (v16);
			v12 = v38;
		}
		v18 = a2[1];
		v19 = 0i64;
		v33 = v18;
		if (v18)
		{
			do
			{
				v20 = 0i64;
				if (v12)
				{
					while (*(_DWORD*)(*a2 + 4 * v19) != *(_DWORD*)(v14 + 4 * v20))
					{
						if (++v20 >= v12)
						{
							v18 = v33;
							goto LABEL_29;
						}
					}
					sub_1401C2F20((__int64)a2, v19);
					sub_1401C2F20((__int64)&v37, v20);
					v27 = sub_14018DB00((__int64)v6, v7 + 1, 4i64);
					v27[v7] = 1;
					v28 = v27;
					if (v6 != v27)
					{
						sub_1407DB590(v27, v6, 4 * v7);
						if (v6)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
						v6 = v28;
					}
					v12 = v38;
					v14 = v37;
					v18 = v33;
					++v7;
				}
				else
				{
				LABEL_29:
					++v19;
				}
				v33 = --v18;
			} while (v18);
			v34 = v6;
			v35 = v7;
		}
		v21 = v36;
		v22 = *(_QWORD*)(v36 + 80);
		if (v7 < v22)
		{
			v23 = v22 - v7;
			do
			{
				v24 = v7 + 1;
				v25 = sub_14018DB00((__int64)v6, v7 + 1, 4i64);
				v25[v7] = 0;
				v26 = v25;
				if (v6 != v25)
				{
					sub_1407DB590(v25, v6, 4 * v7);
					if (v6)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
					v6 = v26;
				}
				++v7;
				--v23;
			} while (v23);
			v34 = v6;
			v35 = v24;
		}
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	}
	if (++ * (_DWORD*)(v21 + 104) >= *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 112) + 8i64) + 4i64))
		*(_QWORD*)(v21 + 112) = 0i64;
	sub_14042D030(*(_QWORD*)(qword_140C65898 + 29504), &v34);
	if (v6)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

