#include "../winhttp.h"

//----- (0000000140287920) ----------------------------------------------------
__int64* __fastcall sub_140287920(
	__int64(__fastcall* a1)(unsigned __int64, __int64, __int64),
	__int64* a2,
	__int64 a3,
	unsigned __int64 a4)
{
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // r15
	int* v9; // rax
	__int64 v10; // r13
	__int64 v11; // rax
	unsigned __int64 v12; // rcx
	__int64 v13; // rcx
	unsigned __int64 v14; // r14
	__int64 v15; // rdi
	unsigned __int64 v16; // rbp
	unsigned __int64 v17; // rbx
	__int64 v18; // r8
	__int64 v19; // r9
	unsigned __int64 v20; // rax
	unsigned __int64 i; // r12
	int* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rax
	unsigned __int64 v25; // rcx
	unsigned __int64 v26; // r14
	__int64 v27; // rbp
	_QWORD* v28; // rbx
	__int64 v29; // rdi
	unsigned __int64 v30; // rsi
	unsigned __int64 v31; // r13
	_QWORD* v32; // r15
	unsigned __int64 v33; // r13
	_QWORD* v34; // rbx
	__int64 v35; // rdi
	unsigned __int64 v36; // rsi
	unsigned __int64 v37; // rbp
	__int64 v38; // rcx
	__int64 v39; // rdi
	_QWORD* v40; // rbx
	_QWORD* v41; // rbx
	__int64 v42; // [rsp+20h] [rbp-88h]
	unsigned __int64 v43; // [rsp+28h] [rbp-80h] BYREF
	__int64 v44[4]; // [rsp+38h] [rbp-70h] BYREF
	int v45[2]; // [rsp+58h] [rbp-50h] BYREF
	__int64 v46; // [rsp+60h] [rbp-48h]
	__int64(__fastcall * v47)(__int64); // [rsp+68h] [rbp-40h]
	__int64 v48; // [rsp+70h] [rbp-38h]
	int v49; // [rsp+78h] [rbp-30h]
	_QWORD* v50; // [rsp+C8h] [rbp+20h]
	__int64 v52; // [rsp+D0h] [rbp+28h]

	if (!a4)
		return a2;
	if (qword_140C63758)
		v7 = *(unsigned int*)(qword_140C63758 + 184);
	else
		v7 = 0i64;
	v8 = (a4 + 255) >> 8;
	if (v7 < v8)
		v8 = v7;
	v43 = v8;
	if (v8 == 1)
	{
		sub_14001FEC0(a1, a2, a4, 0i64);
		return a2;
	}
	else
	{
		v44[0] = (__int64)a1;
		v44[1] = (__int64)a2;
		v44[2] = a3;
		v44[3] = 0i64;
		if (v8)
		{
			v9 = sub_14018B280(32 * v8 + 16, 0);
			if (v9)
			{
				*(_QWORD*)v9 = &off_140B5F110;
				v10 = (__int64)(v9 + 4);
			}
			else
			{
				v10 = 16i64;
			}
		}
		else
		{
			v10 = 0i64;
		}
		v42 = v10;
		if (v8)
		{
			v11 = v10;
			v12 = v8;
			do
			{
				if (v11)
					*(_QWORD*)(v11 + 24) = 0i64;
				v11 += 32i64;
				--v12;
			} while (v12);
		}
		v13 = 0i64;
		v14 = (v8 + a4 - 1) / v8;
		v15 = v10 + 16;
		v16 = v8;
		do
		{
			v17 = v13 + v14;
			v48 = 0i64;
			*(_QWORD*)(v15 - 16) = v13;
			if (a4 < v13 + v14)
				v17 = a4;
			*(_QWORD*)v15 = v44;
			*(_QWORD*)(v15 - 8) = v17;
			v45[0] = 4;
			v45[1] = 1;
			v46 = v15 - 16;
			v47 = sub_140287FD0;
			v49 = 1;
			sub_14019DCA0((__int64)v45, 0, 0i64, (int**)(v15 + 8));
			v13 = v17;
			v15 += 32i64;
			v19 = 0i64;
			--v16;
		} while (v16);
		v20 = (v8 + 1) >> 1;
		for (i = v20; v20 > 1; i += v20)
			v20 = (v20 + 1) >> 1;
		if (i)
		{
			v22 = sub_14018B280(56 * i + 16, 0);
			v19 = 0i64;
			if (v22)
			{
				*(_QWORD*)v22 = &off_140B5F110;
				v23 = (__int64)(v22 + 4);
			}
			else
			{
				v23 = 16i64;
			}
		}
		else
		{
			v23 = 0i64;
		}
		v52 = v23;
		if (i)
		{
			v24 = v23;
			v25 = i;
			do
			{
				if (v24)
					*(_QWORD*)(v24 + 48) = 0i64;
				v24 += 56i64;
				--v25;
			} while (v25);
		}
		v26 = (v8 + 1) >> 1;
		v27 = v23;
		if (v26)
		{
			v28 = (_QWORD*)v10;
			v29 = v23;
			v30 = 1i64;
			v31 = (v8 + 1) >> 1;
			do
			{
				if (v30 >= v8)
					sub_140287DB0(v29, v28);
				else
					sub_140287CF0(v29, v28, v28 + 4);
				v30 += 2i64;
				v28 += 8;
				v29 += 56i64;
				--v31;
			} while (v31);
		}
		if (v26 > 1)
		{
			v32 = (_QWORD*)v27;
			do
			{
				v33 = v26;
				v34 = v32;
				v32 += 7 * v26;
				v26 = (v26 + 1) >> 1;
				if (v26)
				{
					v35 = (__int64)v32;
					v36 = 1i64;
					v37 = v26;
					do
					{
						if (v36 >= v33)
							sub_140287F20(v35, v34);
						else
							sub_140287E60(v35, v34, v34 + 7);
						v36 += 2i64;
						v34 += 14;
						v35 += 56i64;
						--v37;
					} while (v37);
				}
			} while (v26 > 1);
			v50 = v32;
			v8 = v43;
			v27 = (__int64)v50;
		}
		v38 = *(_QWORD*)(v27 + 48);
		LODWORD(v43) = -1;
		(*(void(__fastcall**)(__int64, unsigned __int64*, __int64, __int64))(*(_QWORD*)v38 + 32i64))(
			v38,
			&v43,
			v18,
			v19);
		v39 = *(_QWORD*)(v27 + 40);
		if (i)
		{
			v40 = (_QWORD*)(v52 + 48);
			do
			{
				if (*v40)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v40 + 8i64))(*v40);
				v40 += 7;
				--i;
			} while (i);
		}
		if (v52)
			(**(void(__fastcall***)(__int64))(v52 - 16))(v52 - 16);
		if (v8)
		{
			v41 = (_QWORD*)(v42 + 24);
			do
			{
				if (*v41)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v41 + 8i64))(*v41);
				v41 += 4;
				--v8;
			} while (v8);
		}
		if (v42)
			(**(void(__fastcall***)(__int64))(v42 - 16))(v42 - 16);
		return (__int64*)v39;
	}
}
// 140287A4C: conditional instruction was optimized away because r15.8>=2u
// 140287C2E: variable 'v18' is possibly undefined
// 140287C2E: variable 'v19' is possibly undefined
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140C63758: using guessed type __int64 qword_140C63758;

