#include "../winhttp.h"

//----- (000000014045B030) ----------------------------------------------------
__int64 __fastcall sub_14045B030(__int64 a1, int* a2)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int* v4; // rsi
	__int64 v5; // r13
	int v6; // r12d
	int* v7; // r14
	int v8; // edx
	int v9; // eax
	int* v10; // r15
	int v11; // edx
	__int64 v12; // r8
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // r15
	int* v17; // rax
	__int64 v18; // rax
	int* v19; // rax
	_QWORD* v20; // rsi
	int* v21; // rdi
	__int64 v22; // rax
	bool v23; // zf
	__int64 v24; // r14
	int* v25; // rax
	int* v26; // rax
	__int64 v27; // rax
	_QWORD* v28; // rsi
	int* v29; // rdi
	__int64 v30; // rax
	__int64 v31; // r14
	int* v32; // rax
	__int64 v33; // rax
	__int64 v34; // r14
	int* v35; // rsi
	__int64 v36; // rbx
	int* v37; // rax
	int* v38; // rdi
	unsigned __int64 v39; // rbx
	unsigned int v40; // edx
	__int16* v41; // rcx
	char v42[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v43; // [rsp+38h] [rbp-C8h]
	int* v44; // [rsp+40h] [rbp-C0h]
	__int64 v45; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v46)(); // [rsp+50h] [rbp-B0h] BYREF
	char v47[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v48; // [rsp+60h] [rbp-A0h]
	_WORD* v49; // [rsp+68h] [rbp-98h]
	__int128 v50; // [rsp+110h] [rbp+10h]
	int* v51; // [rsp+120h] [rbp+20h]

	result = *(unsigned int*)(a1 + 128);
	v3 = 0i64;
	v4 = a2;
	v5 = a1;
	v6 = 1;
	if ((_DWORD)result == 27)
	{
		if (!a2 || (v9 = 0, !*(_WORD*)a2))
			v9 = 1;
		v8 = 595471;
		a1 = 115610i64;
		if (v9)
			v8 = 115610;
	}
	else
	{
		if ((_DWORD)result != 31)
		{
			v7 = 0i64;
			goto LABEL_11;
		}
		v8 = 512948;
	}
	result = (__int64)sub_14034BDD0(a1, v8);
	v7 = (int*)result;
LABEL_11:
	if (!v4 || !*(_WORD*)v4)
	{
		result = *(_QWORD*)(v5 + 24);
		if (result)
		{
			result = (__int64)sub_14034BDD0(a1, *(_DWORD*)(result + 8));
			v4 = (int*)result;
		}
	}
	if (!v7 || !*(_WORD*)v7)
	{
		result = (__int64)sub_14034BDD0(a1, 595471);
		v7 = (int*)result;
	}
	if (!v4 || !*(_WORD*)v4)
	{
		result = (__int64)sub_14034BDD0(a1, 108);
		v4 = (int*)result;
	}
	v10 = *(int**)(v5 + 136);
	if (v10 != v4)
	{
		if (v10
			&& v4
			&& (v11 = *(unsigned __int16*)v10, result = *(unsigned __int16*)v4, v12 = 0i64, v11 == (_DWORD)result))
		{
			while ((_WORD)v11)
			{
				v11 = *((unsigned __int16*)v10 + v12 + 1);
				result = *((unsigned __int16*)v4 + ++v12);
				if (v11 != (_DWORD)result)
					goto LABEL_27;
			}
		}
		else
		{
		LABEL_27:
			if (!v10 || !*(_WORD*)v10)
				v6 = 0;
			if (v4)
			{
				if (*(_WORD*)v4)
				{
					do
						++v3;
					while (*((_WORD*)v4 + v3));
				}
				v13 = sub_14018B280(2 * v3 + 18, 0);
				if (v13)
				{
					*(_QWORD*)v13 = off_140B55060;
					*((_QWORD*)v13 + 1) = v3;
				}
				else
				{
					v13 = 0i64;
				}
				v14 = v13 + 4;
				v15 = 2 * v3;
				sub_1407DB590(v13 + 4, v4, v15);
				*(_WORD*)((char*)v14 + v15) = 0;
				*(_QWORD*)(v5 + 136) = v14;
			}
			else
			{
				*(_QWORD*)(v5 + 136) = 0i64;
			}
			if (v10)
				(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v10 - 2) + 8i64))((_WORD*)v10 - 8);
			v16 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v5 + 688));
			sub_1400B6F30((__int64)&v46);
			v50 = 0i64;
			v46 = off_140B69230;
			v51 = 0i64;
			v17 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v50 = v17;
			*((_QWORD*)&v50 + 1) = v17;
			v51 = v17 + 4;
			if (v17)
				*(_WORD*)v17 = 0;
			if (v7)
			{
				v18 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v18;
					while (*((_WORD*)v7 + v18));
				}
				sub_14001C480((__int64)v47, v7, (int*)((char*)v7 + 2 * v18));
			}
			else if (v48 != v49)
			{
				*v48 = 0;
				v49 = v48;
			}
			v19 = sub_14018B280(96i64, 0);
			if (v19)
				v20 = (_QWORD*)sub_1404DB7E0((__int64)v19, v5);
			else
				v20 = 0i64;
			v21 = 0i64;
			v43 = 0i64;
			v44 = 0i64;
			v45 = 0i64;
			v22 = 0i64;
			do
				v23 = aUnit_2[++v22] == 0;
			while (!v23);
			v24 = (2 * v22) >> 1;
			if ((unsigned __int64)(v24 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v21 = sub_14018B280(2 * (v24 + 1), 0);
				v43 = v21;
				v44 = v21;
				v45 = (__int64)v21 + 2 * v24 + 2;
			}
			sub_1407DB590(v21, (int*)L"unit", 2 * v24);
			v25 = (int*)((char*)v21 + 2 * v24);
			v44 = v25;
			if (v25)
				*(_WORD*)v25 = 0;
			sub_1400B7480((__int64)&v46, v20);
			(*(void(__fastcall**)(_QWORD*, char*))(*v20 + 72i64))(v20, v42);
			if (v43)
				sub_14018B900((__int64)v43, 0);
			if (v16)
			{
				v26 = sub_14018B280(96i64, 0);
				if (v26)
				{
					v27 = sub_1404DB7E0((__int64)v26, v16);
					v16 = 0i64;
					v28 = (_QWORD*)v27;
				}
				else
				{
					v16 = 0i64;
					v28 = 0i64;
				}
				v29 = 0i64;
				v43 = 0i64;
				v44 = 0i64;
				v45 = 0i64;
				v30 = 0i64;
				do
					v23 = aOwner[++v30] == 0;
				while (!v23);
				v31 = (2 * v30) >> 1;
				if ((unsigned __int64)(v31 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v29 = sub_14018B280(2 * (v31 + 1), 0);
					v43 = v29;
					v44 = v29;
					v45 = (__int64)v29 + 2 * v31 + 2;
				}
				sub_1407DB590(v29, (int*)L"owner", 2 * v31);
				v32 = (int*)((char*)v29 + 2 * v31);
				v44 = v32;
				if (v32)
					*(_WORD*)v32 = 0;
				sub_1400B7480((__int64)&v46, v28);
				(*(void(__fastcall**)(_QWORD*, char*))(*v28 + 72i64))(v28, v42);
				if (v43)
					sub_14018B900((__int64)v43, 0);
			}
			v33 = sub_1400B7660(&v46);
			v34 = *(_QWORD*)(v5 + 16);
			v35 = *(int**)(v33 + 8);
			if (v35)
			{
				v36 = v16;
				if (*(_WORD*)v35)
				{
					do
						++v36;
					while (*((_WORD*)v35 + v36));
				}
				v37 = sub_14018B280(2 * v36 + 18, 0);
				if (v37)
				{
					*((_QWORD*)v37 + 1) = v36;
					*(_QWORD*)v37 = off_140B55060;
				}
				else
				{
					v37 = (int*)v16;
				}
				v38 = v37 + 4;
				v39 = 2 * v36;
				sub_1407DB590(v37 + 4, v35, v39);
				*(_WORD*)((char*)v38 + v39) = v16;
				*(_QWORD*)(v5 + 16) = v38;
			}
			else
			{
				*(_QWORD*)(v5 + 16) = v16;
			}
			if (v34)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v34 - 16) + 8i64))(v34 - 16);
			if ((_QWORD)v50)
				sub_14018B900(v50, 0);
			result = (__int64)sub_1400B7390(&v46);
			v40 = *(_DWORD*)(v5 + 360);
			if (v40)
				result = (__int64)sub_14045B6F0(v5, v40);
			if (v6)
			{
				v41 = &word_140B7B704;
				if (*(_QWORD*)(v5 + 16))
					v41 = *(__int16**)(v5 + 16);
				return Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"UnitNameChanged",
					"US",
					*(unsigned int*)(v5 + 8),
					v41);
			}
		}
	}
	return result;
}
// 14045B0B3: variable 'a1' is possibly undefined
// 140B07CB0: using guessed type wchar_t aOwner[6];
// 140B07CC0: using guessed type wchar_t aUnit_2[5];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14045B030: using guessed type char var_F8[8];
// 14045B030: using guessed type char var_120[8];

