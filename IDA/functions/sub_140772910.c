//----- (0000000140772910) ----------------------------------------------------
_QWORD* __fastcall sub_140772910(
	__int64 a1,
	unsigned int a2,
	int** a3,
	__int64 a4,
	int* a5,
	int a6,
	_OWORD* a7,
	int* a8,
	void(__fastcall*** a9)(_QWORD),
	__int64* a10)
{
	__int64 v11; // rbp
	int** v12; // rbx
	int* v13; // rax
	_QWORD* v14; // r12
	unsigned __int64 v15; // r15
	_QWORD* v16; // r14
	__int64* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rsi
	__int64 v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	__int64 v24; // rdx
	unsigned __int64 v25; // rbx
	__int64 v26; // rbp
	__int64 v27; // rax
	__int64 v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int* v32; // rax
	__int64 v33; // rax
	__int64 v34; // rbx
	int* v35; // rax
	int* v36; // rdi
	int* v37; // rdx
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int64(__fastcall * *v41)(); // [rsp+30h] [rbp-58h] BYREF
	int v42; // [rsp+38h] [rbp-50h]
	__int64 v43; // [rsp+40h] [rbp-48h]
	unsigned __int64 v46; // [rsp+A8h] [rbp+20h]

	v11 = a1;
	v12 = a3;
	v13 = sub_14018B280(64i64, 0);
	if (v13)
		v14 = (_QWORD*)sub_14076EEB0((__int64)v13, a5, a6, a7);
	else
		v14 = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	v46 = 0i64;
	if (!*(_QWORD*)(v11 + 808))
	{
	LABEL_22:
		v32 = sub_14018B280(224i64, 0);
		if (v32)
			v16 = sub_14076F600(v32, a2, v12, a8, a9, (__int64)a10);
		else
			v16 = 0i64;
		v33 = sub_1400F9DD0((__int64)&v41, (__int64)a10);
		sub_14076F910((__int64)v16, a2, v33, (__int64)v14);
		v34 = *(_QWORD*)(v11 + 808);
		v35 = sub_14018DB00(*(_QWORD*)(v11 + 800), v34 + 1, 8i64);
		v36 = v35;
		*(_QWORD*)&v35[2 * v34] = v16;
		v37 = *(int**)(v11 + 800);
		if (v37 != v35)
		{
			sub_1407DB590(v35, v37, 8i64 * *(_QWORD*)(v11 + 808));
			v38 = *(_QWORD*)(v11 + 800);
			if (v38)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
			*(_QWORD*)(v11 + 800) = v36;
		}
		*(_QWORD*)(v11 + 808) = v34 + 1;
		goto LABEL_30;
	}
	v17 = (__int64*)(v11 + 800);
	do
	{
		v18 = *v17;
		v41 = off_140B56A08;
		v19 = *(_QWORD*)(v18 + 8 * v15);
		v20 = a10[2];
		v42 = -2;
		v43 = v20;
		if ((*(unsigned int(__fastcall**)(__int64*))(*a10 + 8))(a10))
		{
			v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a10[2] + 32) + 160i64), *((_DWORD*)a10 + 2));
			v23 = *(_QWORD*)(v22 + 16);
			*(_QWORD*)v23 = *v21;
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v21 + 2);
			*(_QWORD*)(v22 + 16) += 16i64;
			v42 = sub_1400578C0(v43);
		}
		if ((unsigned int)sub_14076F910(v19, a2, (__int64)&v41, (__int64)v14))
		{
			if (v16)
			{
				v25 = 0i64;
				if (*(_QWORD*)(v19 + 56))
				{
					do
					{
						v26 = *(_QWORD*)(*(_QWORD*)(v19 + 48) + 8 * v25);
						if ((_QWORD*)v26 != v14)
						{
							v27 = a10[2];
							v41 = off_140B56A08;
							v43 = v27;
							v28 = *a10;
							v42 = -2;
							if ((*(unsigned int(__fastcall**)(__int64*))(v28 + 8))(a10))
							{
								v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a10[2] + 32) + 160i64), *((_DWORD*)a10 + 2));
								v31 = *(_QWORD*)(v30 + 16);
								*(_QWORD*)v31 = *v29;
								*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
								*(_QWORD*)(v30 + 16) += 16i64;
								v42 = sub_1400578C0(v43);
							}
							sub_14076F910((__int64)v16, a2, (__int64)&v41, v26);
						}
						++v25;
					} while (v25 < *(_QWORD*)(v19 + 56));
					v15 = v46;
					v11 = a1;
				}
				sub_14076F7C0(v19, v24);
				sub_14018B900(v19, 0);
				sub_140007270(v11 + 800, v15--);
			}
			else
			{
				v16 = (_QWORD*)v19;
			}
		}
		++v15;
		v17 = (__int64*)(v11 + 800);
		v46 = v15;
	} while (v15 < *(_QWORD*)(v11 + 808));
	if (!v16)
	{
		v12 = a3;
		goto LABEL_22;
	}
LABEL_30:
	if (v14)
	{
		v39 = v14[4];
		if (v39)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
		if (*v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v14 - 16i64) + 8i64))(*v14 - 16i64);
		sub_14018B900((__int64)v14, 0);
	}
	return v16;
}
// 1407729F2: variable 'v22' is possibly undefined
// 140772A97: variable 'v30' is possibly undefined
// 140772AED: variable 'v24' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

