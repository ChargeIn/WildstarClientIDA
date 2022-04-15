//----- (000000014066B3E0) ----------------------------------------------------
__int64 __fastcall sub_14066B3E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rbx
	int* v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rbx
	__int64 v11; // r14
	int* v12; // rdx
	__int64 v13; // rax
	unsigned __int16* v14; // rbx
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	unsigned __int16* v17; // rcx
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	__int64 v21; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v22; // [rsp+28h] [rbp-20h]
	int* v23; // [rsp+30h] [rbp-18h]
	int* v24; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 48i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_14048D310(qword_140C65990, v4),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5))
	{
		v7 = sub_14018B280(16i64, 0);
		v22 = (unsigned __int16*)v7;
		v23 = v7;
		v24 = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
		v10 = 0i64;
		v11 = v8 + 20;
		do
		{
			v12 = (int*)sub_14034BDD0(v9, *(_DWORD*)(v11 + 4 * v10));
			if (!v12)
				break;
			v13 = 0i64;
			if (*(_WORD*)v12)
			{
				do
					++v13;
				while (*((_WORD*)v12 + v13));
			}
			sub_14001C310(&v21, v12, (int*)((char*)v12 + 2 * v13));
			++v10;
		} while (v10 < 6);
		v14 = v22;
		v15 = (unsigned __int64*)sub_14018F0E0(&v21, v22)[1];
		if (v15)
		{
			v16 = -1i64;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			sub_140058710((__int64)a1, v15, v16);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v22)
			sub_14018B900((__int64)v22, 0);
		if (v14)
		{
			v17 = v14;
		LABEL_28:
			sub_14018B900((__int64)v17, 0);
		}
	}
	else
	{
		v18 = (unsigned __int64*)sub_14018F0E0(&v21, word_1409F49CC)[1];
		if (v18)
		{
			v19 = -1i64;
			do
				++v19;
			while (*((_BYTE*)v18 + v19));
			sub_140058710((__int64)a1, v18, v19);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v17 = v22;
		if (v22)
			goto LABEL_28;
	}
	return 1i64;
}
// 14066B4A4: variable 'v9' is possibly undefined
// 1409F49CC: using guessed type unsigned __int16 word_1409F49CC[8];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

