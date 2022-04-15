#include "../winhttp.h"

//----- (00000001406CDE90) ----------------------------------------------------
__int64 __fastcall sub_1406CDE90(__int64* a1)
{
	__int64 result; // rax
	int v3; // ebp
	unsigned int v4; // edx
	__int64 v5; // rbx
	int* v6; // rax
	unsigned int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rbx
	__int64 v11; // rcx
	__int16* v12; // rax
	int* v13; // r14
	__int64 v14; // rax
	int* v15; // r15
	__int64 v16; // rbx
	unsigned __int64 v17; // rbx
	__int64 v18; // r8
	const char* v19; // rdx
	__int64 v20; // rcx
	bool v21; // zf
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__int16* v26; // rax
	int* v27; // r14
	__int64 v28; // rax
	__int64 v29; // rbx
	unsigned __int64 v30; // rbx
	unsigned int v31; // ecx
	__int64 v32; // rax
	__int64 v33; // rcx
	int v34; // edx
	__int16* v35; // rbx
	__int64 v36; // rcx
	__int16* v37; // rax
	int* v38; // r14
	__int64 v39; // rax
	__int64 v40; // rbx
	unsigned __int64 v41; // rbx
	__int16* v42; // rbx
	__int64 v43; // rcx
	__int16* v44; // rax
	int* v45; // r14
	__int64 v46; // rax
	__int64 v47; // rbx
	unsigned __int64 v48; // rbx
	__int64 v49; // [rsp+30h] [rbp-38h] BYREF
	int v50; // [rsp+38h] [rbp-30h]
	__int64 v51[2]; // [rsp+3Ch] [rbp-2Ch] BYREF
	__int64 v52; // [rsp+70h] [rbp+8h] BYREF

	result = sub_14018CDF0();
	v3 = result;
	if (*((_DWORD*)a1 + 563) || *((_DWORD*)a1 + 564) < (unsigned int)result)
	{
		v4 = *((_DWORD*)a1 + 552);
		if (v4 && a1[280])
		{
			v5 = *a1;
			v6 = sub_1400B5DF0(qword_140C658F0, v4, 0i64);
			(*(void(__fastcall**)(__int64*, const char*, __int64, int*, _DWORD))(v5 + 120))(
				a1,
				"ioi",
				2i64,
				v6,
				*((_DWORD*)a1 + 560));
		LABEL_62:
			result = (unsigned int)(v3 + 1000);
			*((_DWORD*)a1 + 564) = result;
			return result;
		}
		v7 = *((_DWORD*)a1 + 553);
		if (v7 && a1[280])
		{
			v8 = sub_1401FF120(v7);
			if (!v8)
				goto LABEL_62;
			v10 = sub_14034BDD0(v9, *(_DWORD*)(v8 + 12));
			v12 = sub_14034BDD0(v11, 23708);
			v13 = (int*)*sub_14034C700(&v52, (__int64)v12, v10, a1[280]);
			v14 = 0i64;
			v15 = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v14;
				while (*((_WORD*)v13 + v14));
			}
			v16 = (2 * v14) >> 1;
			if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v15 = sub_14018B280(2 * (v16 + 1), 0);
			v17 = 2 * v16;
			sub_1407DB590(v15, v13, v17);
			if ((int*)((char*)v15 + v17))
				*(_WORD*)((char*)v15 + v17) = 0;
			if (v52)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
			v18 = 9i64;
			v19 = "iS";
		}
		else
		{
			v20 = *((unsigned int*)a1 + 554);
			v21 = (_DWORD)v20 == 15;
			if ((int)v20 < 15)
			{
				if (a1[280])
				{
					v22 = *((unsigned int*)a1 + 560);
					v50 = *((_DWORD*)a1 + 554);
					v49 = v22;
					v23 = *a1;
					memset(v51, 0, 12);
					(*(void(__fastcall**)(__int64*, const char*, __int64, __int64*))(v23 + 120))(a1, "im", 10i64, &v49);
					goto LABEL_62;
				}
				v21 = (_DWORD)v20 == 15;
			}
			if (v21)
			{
				v20 = *((unsigned int*)a1 + 555);
				if ((_DWORD)v20)
				{
					if (a1[280])
					{
						v24 = *((unsigned int*)a1 + 560);
						LODWORD(v51[0]) = *((_DWORD*)a1 + 555);
						v49 = v24;
						v25 = *a1;
						v50 = 15;
						*(__int64*)((char*)v51 + 4) = 0i64;
						(*(void(__fastcall**)(__int64*, const char*, __int64, __int64*))(v25 + 120))(a1, "im", 10i64, &v49);
						goto LABEL_62;
					}
				}
			}
			if (a1[278])
			{
				(*(void(__fastcall**)(__int64*, const char*, __int64))(*a1 + 120))(a1, "iM", 4i64);
				goto LABEL_62;
			}
			if (*((_DWORD*)a1 + 559))
			{
				v26 = sub_14034BDD0(v20, 280540);
				v27 = (int*)*sub_14034C700(&v52, (__int64)v26, *((unsigned int*)a1 + 559));
				v28 = 0i64;
				v15 = 0i64;
				if (*(_WORD*)v27)
				{
					do
						++v28;
					while (*((_WORD*)v27 + v28));
				}
				v29 = (2 * v28) >> 1;
				if ((unsigned __int64)(v29 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v15 = sub_14018B280(2 * (v29 + 1), 0);
				v30 = 2 * v29;
				sub_1407DB590(v15, v27, v30);
				if ((int*)((char*)v15 + v30))
					*(_WORD*)((char*)v15 + v30) = 0;
				if (v52)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
				v18 = 12i64;
				v19 = "iS";
			}
			else
			{
				v31 = *((_DWORD*)a1 + 558);
				if (!v31)
					goto LABEL_62;
				v32 = sub_140242D40(v31);
				if (!v32)
					goto LABEL_62;
				v34 = *(_DWORD*)(v32 + 4);
				if (a1[280])
				{
					v35 = sub_14034BDD0(v33, v34);
					v37 = sub_14034BDD0(v36, 200437);
					v38 = (int*)*sub_14034C700(&v52, (__int64)v37, v35, a1[280]);
					v39 = 0i64;
					v15 = 0i64;
					if (*(_WORD*)v38)
					{
						do
							++v39;
						while (*((_WORD*)v38 + v39));
					}
					v40 = (2 * v39) >> 1;
					if ((unsigned __int64)(v40 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v15 = sub_14018B280(2 * (v40 + 1), 0);
					v41 = 2 * v40;
					sub_1407DB590(v15, v38, v41);
					if ((int*)((char*)v15 + v41))
						*(_WORD*)((char*)v15 + v41) = 0;
					if (v52)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
					v19 = "iS";
				}
				else
				{
					v42 = sub_14034BDD0(v33, v34);
					v44 = sub_14034BDD0(v43, 223114);
					v45 = (int*)*sub_14034C700(&v52, (__int64)v44, v42);
					v46 = 0i64;
					v15 = 0i64;
					if (*(_WORD*)v45)
					{
						do
							++v46;
						while (*((_WORD*)v45 + v46));
					}
					v47 = (2 * v46) >> 1;
					if ((unsigned __int64)(v47 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v15 = sub_14018B280(2 * (v47 + 1), 0);
					v48 = 2 * v47;
					sub_1407DB590(v15, v45, v48);
					if ((int*)((char*)v15 + v48))
						*(_WORD*)((char*)v15 + v48) = 0;
					if (v52)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
					v19 = "iS";
				}
				v18 = 11i64;
			}
		}
		(*(void(__fastcall**)(__int64*, const char*, __int64, int*))(*a1 + 120))(a1, v19, v18, v15);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		goto LABEL_62;
	}
	return result;
}
// 1406CDF48: variable 'v9' is possibly undefined
// 1406CDF55: variable 'v11' is possibly undefined
// 1406CE1A5: variable 'v33' is possibly undefined
// 1406CE1B2: variable 'v36' is possibly undefined
// 1406CE25F: variable 'v43' is possibly undefined
// 140C658F0: using guessed type __int64 qword_140C658F0;

