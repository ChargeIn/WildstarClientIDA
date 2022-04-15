//----- (00000001404674C0) ----------------------------------------------------
__int64 __fastcall sub_1404674C0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	int* v4; // rax
	__int64 v5; // rbx
	int v6; // esi
	__int64 result; // rax
	unsigned __int64 v8; // rbx
	__int64 v9; // r12
	__int64 v10; // rax
	_DWORD* v11; // rax
	unsigned int v12; // edi
	__int64 v13; // rax
	unsigned int v14; // esi
	__int64 v15; // rax
	unsigned int v16; // r14d
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // r13
	unsigned __int64 v20; // rdi
	_DWORD* v21; // rax
	unsigned int v22; // r14d
	__int64 v23; // rbx
	unsigned int v24; // r12d
	__int64 v25; // rax
	unsigned int v26; // esi
	__int64 v27; // rax
	int v28; // esi
	unsigned int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rax
	unsigned int v32; // edi
	__int64 v33; // r8
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37[3]; // [rsp+30h] [rbp-D0h] BYREF
	int v38; // [rsp+48h] [rbp-B8h]
	int v39[16]; // [rsp+4Ch] [rbp-B4h] BYREF
	__int64 v40; // [rsp+8Ch] [rbp-74h]
	__int64 v41; // [rsp+94h] [rbp-6Ch]
	__int64 v42; // [rsp+9Ch] [rbp-64h]
	__int64 v43; // [rsp+A8h] [rbp-58h]
	__int64 v44; // [rsp+B0h] [rbp-50h]
	__int64 v45; // [rsp+B8h] [rbp-48h]
	__int64 v46; // [rsp+C0h] [rbp-40h]
	__int64 v47; // [rsp+C8h] [rbp-38h]
	__int64 v48; // [rsp+D0h] [rbp-30h]
	int v49; // [rsp+D8h] [rbp-28h]
	__int64 v50; // [rsp+E0h] [rbp-20h]
	__int64 v51; // [rsp+E8h] [rbp-18h]
	__int64 v52; // [rsp+F0h] [rbp-10h]
	__int64 v53; // [rsp+F8h] [rbp-8h]
	__int64 v54; // [rsp+100h] [rbp+0h]
	__int64 v55; // [rsp+108h] [rbp+8h]
	__int64 v56; // [rsp+110h] [rbp+10h]
	int v57; // [rsp+118h] [rbp+18h]

	v38 = 1065353216;
	v37[0] = 0i64;
	v37[1] = 0i64;
	v37[2] = 2i64;
	sub_1407E4830(v39, 0i64, 0x40ui64);
	v40 = 0i64;
	v41 = 0i64;
	v42 = 0i64;
	v43 = 0i64;
	v44 = 0i64;
	v45 = 0i64;
	v46 = 0i64;
	v47 = 0i64;
	v48 = 0i64;
	v49 = 0;
	v50 = 0i64;
	v51 = 0i64;
	v52 = 0i64;
	v53 = 0i64;
	v54 = 0i64;
	v55 = 0i64;
	v56 = 0i64;
	v57 = 0;
	sub_140466EC0(a1, (__int64)v37);
	v2 = *(_QWORD*)(a1 + 3264);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v2 + 24i64))(
			v2,
			*(_QWORD*)(qword_140C65898 + 29264),
			v37);
		if ((int)result < 0)
			return result;
	}
	else
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29264);
		v4 = sub_14018B280(3200i64, 0);
		if (v4)
			v5 = sub_1401DF340((__int64)v4);
		else
			v5 = 0i64;
		v6 = (*(__int64(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v5 + 24i64))(v5, v3, v37);
		if (v6 < 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 360i64))(v5, 1i64);
			return (unsigned int)v6;
		}
		*(_QWORD*)(a1 + 3264) = v5;
	}
	v8 = 0i64;
	v9 = 0i64;
	if (*(_DWORD*)(a1 + 128) != 18 && !*(_QWORD*)(a1 + 3360))
	{
		v10 = *(_QWORD*)(a1 + 3336);
		if (v10)
		{
			v9 = v10 + 192;
			v11 = (_DWORD*)(v10 + 196);
			while (*(v11 - 1))
			{
				if (!*v11)
				{
					++v8;
					break;
				}
				if (!v11[1])
				{
					v8 += 2i64;
					break;
				}
				if (!v11[2])
				{
					v8 += 3i64;
					break;
				}
				if (!v11[3])
				{
					v8 += 4i64;
					break;
				}
				v8 += 5i64;
				v11 += 5;
				if (v8 >= 0x14)
					break;
			}
		}
	}
	v12 = 0;
	if (v8)
	{
		v13 = 0i64;
		do
		{
			v14 = *(_DWORD*)(v9 + 4 * v13);
			if (qword_140C63840)
			{
				v15 = qword_140C63840(off_140A6ADA8, v14, qword_140C63858);
			}
			else
			{
				if (dword_140C64F64 || (int)sub_14020BAC0() < 0)
					goto LABEL_39;
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v14);
			}
			if (v15)
			{
				v16 = *(_DWORD*)(v15 + 16);
				if (qword_140C63840)
				{
					v17 = qword_140C63840(off_140A6AC58, v16, qword_140C63858);
					goto LABEL_37;
				}
				if (!dword_140C650D4 && (int)sub_14020A140() >= 0)
				{
					v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AC8 + 24i64))(qword_140C64AC8, v16);
				LABEL_37:
					if (v17)
						sub_140466D20(a1, *(_DWORD*)(v17 + 8));
				}
			}
		LABEL_39:
			v13 = ++v12;
		} while (v12 < v8);
	}
	v18 = *(_QWORD*)(a1 + 3344);
	if (v18)
	{
		v19 = v18 + 4;
		v20 = 0i64;
		v21 = (_DWORD*)(v18 + 4);
		do
		{
			if (!*v21)
				break;
			++v20;
			++v21;
		} while (v20 < 6);
		v22 = 0;
		if (v20)
		{
			v23 = 0i64;
			do
			{
				v24 = *(_DWORD*)(v19 + 4 * v23);
				if (qword_140C63840)
				{
					v25 = qword_140C63840(off_140A6ADA8, v24, qword_140C63858);
				}
				else
				{
					if (dword_140C64F64 || (int)sub_14020BAC0() < 0)
						goto LABEL_66;
					v25 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v24);
				}
				if (v25)
				{
					v26 = *(_DWORD*)(v25 + 16);
					if (qword_140C63840)
					{
						v27 = qword_140C63840(off_140A6AC58, v26, qword_140C63858);
						goto LABEL_57;
					}
					if (!dword_140C650D4 && (int)sub_14020A140() >= 0)
					{
						v27 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AC8 + 24i64))(
							qword_140C64AC8,
							v26);
					LABEL_57:
						if (v27)
						{
							v28 = *(_DWORD*)(v27 + 8);
							v29 = *(_DWORD*)(*(_QWORD*)(a1 + 3344) + 4 * v23 + 28);
							if (qword_140C63840)
							{
								v30 = qword_140C63840(off_140A6AD70, v29, qword_140C63858);
							}
							else if (dword_140C63DA4)
							{
								v30 = 0i64;
							}
							else if ((int)sub_14020B680() >= 0)
							{
								v30 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BA8 + 24i64))(
									qword_140C64BA8,
									v29);
							}
							else
							{
								v30 = 0i64;
							}
							sub_1401DC0D0(v30);
							sub_140466D20(a1, v28);
						}
					}
				}
			LABEL_66:
				v23 = ++v22;
			} while (v22 < v20);
		}
	}
	v31 = *(_QWORD*)(a1 + 24);
	v32 = 1;
	if (v31)
	{
		v33 = *(unsigned int*)(v31 + 324);
		if ((_DWORD)v33)
		{
			v34 = *(_QWORD*)(a1 + 3264);
			if (v34)
			{
				(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v34 + 80i64))(v34, 20i64, v33, 0i64);
				*(_DWORD*)(a1 + 244) = 1;
				sub_1404718E0(a1, 0, 0, 1, 1);
				sub_140472D80(a1);
			}
		}
	}
	if (!*(_DWORD*)(a1 + 14052)
		|| (v35 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192))) == 0
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v35 + 32i64))(v35))
	{
		v32 = 0;
	}
	v36 = *(_QWORD*)(a1 + 3264);
	if (v36)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v36 + 192i64))(v36, v32);
	return 0i64;
}
// 140A6AC58: using guessed type wchar_t *off_140A6AC58[2];
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C64AC8: using guessed type __int64 qword_140C64AC8;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C650D4: using guessed type int dword_140C650D4;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404674C0: using guessed type int var_104[16];

