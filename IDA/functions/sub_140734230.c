//----- (0000000140734230) ----------------------------------------------------
__int64 __fastcall sub_140734230(_QWORD* a1, int a2, __int64 a3)
{
	int v3; // r14d
	__int64 result; // rax
	__int64 v6; // r13
	unsigned __int64 v7; // rdx
	unsigned int v8; // ecx
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // rcx
	_QWORD* v12; // rbx
	char* v13; // rdx
	_DWORD* v14; // rax
	int* v15; // rsi
	unsigned __int64 v16; // rdi
	int* v17; // rax
	unsigned __int16* v18; // rbx
	unsigned __int64 v19; // rdi
	__int64 v20; // rcx
	unsigned __int64 v21; // r12
	__int64 v22; // rdi
	_DWORD* v23; // r13
	int* v24; // rbp
	__int64 v25; // rsi
	int* v26; // rax
	int* v27; // rdi
	unsigned __int64 v28; // rsi
	int v29; // edx
	__int64 v30; // r8
	unsigned __int64 v31; // r15
	unsigned __int64 v32; // r14
	unsigned __int64 v33; // r15
	__int64 v34; // rbp
	unsigned __int64 v35; // rsi
	__int64 v36; // [rsp+20h] [rbp-98h]
	unsigned __int64 v37; // [rsp+28h] [rbp-90h]
	__int64 v38; // [rsp+30h] [rbp-88h] BYREF
	__int64 v39; // [rsp+38h] [rbp-80h]
	__int64 v40; // [rsp+50h] [rbp-68h] BYREF
	int* v41; // [rsp+58h] [rbp-60h]

	v3 = a2;
	if (qword_140C63838)
	{
		result = qword_140C63838(off_140A6A718, qword_140C63858);
	}
	else if (dword_140C646A8)
	{
		result = 0i64;
	}
	else if ((int)sub_140203B40() >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65008 + 40i64))(qword_140C65008);
	}
	else
	{
		result = 0i64;
	}
	v6 = (unsigned int)result;
	v37 = (unsigned int)result;
	if ((_DWORD)result)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 768);
		v8 = 0;
		if (v7)
		{
			v9 = *(_QWORD*)(qword_140C63650 + 760);
			v10 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v9 + 8 * v10) + 400i64) != a1)
			{
				v10 = ++v8;
				if (v8 >= v7)
					goto LABEL_13;
			}
			v11 = *(_QWORD*)(v9 + 8i64 * v8);
		}
		else
		{
		LABEL_13:
			v11 = 0i64;
		}
		v12 = *(_QWORD**)(v11 + 400);
		v13 = (char*)sub_14018F0E0(&v38, 0i64)[1];
		v14 = (_DWORD*)v12[3];
		if ((unsigned __int64)v14 < v12[2] && v14 != dword_140A12138 && (int)v14[2] > 0)
			v13 = (char*)sub_140056BB0(v12, 1u, 0i64);
		sub_14018F2D0(&v40, v13);
		if (v39)
			sub_14018B900(v39, 0);
		v15 = v41;
		if (v41)
		{
			v16 = 0i64;
			if (*(_WORD*)v41)
			{
				do
					++v16;
				while (*((_WORD*)v41 + v16));
			}
			v17 = sub_14018B280(2 * v16 + 18, 0);
			if (v17)
			{
				*(_QWORD*)v17 = off_140B55060;
				*((_QWORD*)v17 + 1) = v16;
			}
			else
			{
				v17 = 0i64;
			}
			v18 = (unsigned __int16*)(v17 + 4);
			v19 = v16;
			sub_1407DB590(v17 + 4, v15, v19 * 2);
			v18[v19] = 0;
			sub_14018B900((__int64)v15, 0);
		}
		else
		{
			v18 = 0i64;
		}
		sub_1400585E0((__int64)a1, 1);
		result = sub_1405B1510(&qword_140C7DFB0);
		v21 = 0i64;
		v22 = result;
		v36 = result;
		if (v6)
		{
			do
			{
				if (qword_140C63838)
				{
					result = qword_140C63838(off_140A6A718, qword_140C63858);
				}
				else
				{
					if (dword_140C646A8 || (result = sub_140203B40(), (int)result < 0))
					{
					LABEL_41:
						v23 = 0i64;
						goto LABEL_42;
					}
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65008 + 40i64))(qword_140C65008);
				}
				if ((unsigned int)result <= (unsigned int)v21)
					goto LABEL_41;
				result = (__int64)qword_140C63848;
				if (qword_140C63848)
				{
					result = qword_140C63848(off_140A6A718, (unsigned int)v21, qword_140C63858);
					v23 = (_DWORD*)result;
				}
				else
				{
					if (dword_140C646A8)
						goto LABEL_41;
					result = sub_140203B40();
					if ((int)result < 0)
						goto LABEL_41;
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65008 + 32i64))(
						qword_140C65008,
						(unsigned int)v21);
					v23 = (_DWORD*)result;
				}
			LABEL_42:
				if (v23)
				{
					result = (unsigned int)v23[4];
					if ((result & 1) == 0 && ((result & 8) == 0 || v22 && *(_DWORD*)(v22 + 48) != 5))
					{
						result = (__int64)sub_14034BDD0(v20, v23[3]);
						v24 = (int*)result;
						if (result)
						{
							v25 = 0i64;
							if (*(_WORD*)result)
							{
								do
									++v25;
								while (*(_WORD*)(result + 2 * v25));
							}
							v26 = sub_14018B280(2 * v25 + 18, 0);
							if (v26)
							{
								*((_QWORD*)v26 + 1) = v25;
								*(_QWORD*)v26 = off_140B55060;
							}
							else
							{
								v26 = 0i64;
							}
							v27 = v26 + 4;
							v28 = 2 * v25;
							result = (__int64)sub_1407DB590(v26 + 4, v24, v28);
							*(_WORD*)((char*)v27 + v28) = 0;
						}
						else
						{
							v27 = 0i64;
						}
						if (!v3 || v23[2] == v3)
						{
							if (v18 == word_1409F91BC)
								goto LABEL_68;
							if (!v18 || (LOWORD(v29) = *v18, v30 = 0i64, *v18))
							{
							LABEL_62:
								v31 = *((_QWORD*)v27 - 1);
								v32 = *((_QWORD*)v18 - 1);
								if (v31 >= v32)
								{
									v33 = v31 - v32;
									v34 = (__int64)v27;
									v35 = 0i64;
									do
									{
										result = sub_14018E3E0(v34, v18, v32);
										if (!(_DWORD)result)
										{
											result = (unsigned int)-v18[v32];
											if (!v18[v32])
												goto LABEL_68;
										}
										++v35;
										v34 += 2i64;
									} while (v35 <= v33);
								}
							}
							else
							{
								while ((_WORD)v29)
								{
									v29 = v18[v30 + 1];
									result = word_1409F91BC[++v30];
									if (v29 != (_DWORD)result)
										goto LABEL_62;
								}
							LABEL_68:
								result = sub_1406AD5F0(a1, (__int64)v23, a3);
							}
						}
						if (v27)
							result = (*(__int64(__fastcall**)(int*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 4);
						v3 = a2;
						v22 = v36;
					}
				}
				++v21;
			} while (v21 < v37);
		}
		if (v18)
			return (*(__int64(__fastcall**)(_QWORD*))(*((_QWORD*)v18 - 2) + 8i64))((_QWORD*)v18 - 2);
	}
	return result;
}
// 1407344E1: variable 'v20' is possibly undefined
// 1409F91BC: using guessed type unsigned __int16 word_1409F91BC[8];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A718: using guessed type wchar_t *off_140A6A718[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646A8: using guessed type int dword_140C646A8;
// 140C65008: using guessed type __int64 qword_140C65008;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

