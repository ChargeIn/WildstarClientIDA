#include "../winhttp.h"

//----- (00000001406188B0) ----------------------------------------------------
__int64 __fastcall sub_1406188B0(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // ebp
	unsigned int v4; // edi
	__int64 v5; // rax
	_DWORD* v6; // rsi
	int* v7; // rax
	int* v8; // rbx
	int* v9; // rax
	unsigned int v10; // eax
	unsigned int v11; // r15d
	unsigned int v12; // r14d
	int v13; // r12d
	__int64 v14; // rax
	_DWORD* v15; // rbp
	unsigned int v16; // edx
	__int64 v17; // r8
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64* v20; // rbx
	__int64 v21; // rbx
	unsigned int v22; // edi
	__int64 v23; // rsi
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	unsigned int v32; // ecx
	int* v33; // rdi
	__int64 v34; // rbx
	int* v35; // rax
	__int64 v37; // [rsp+20h] [rbp-48h] BYREF
	__int64 v38; // [rsp+78h] [rbp+10h] BYREF
	__int64 v39; // [rsp+80h] [rbp+18h] BYREF
	__int64 v40; // [rsp+88h] [rbp+20h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6BE80, qword_140C63858);
	}
	else
	{
		if (dword_140C65038)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140220260() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D80 + 40i64))(qword_140C63D80);
	}
	v3 = v2;
LABEL_9:
	v4 = 0;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C65038 && (int)sub_140220260() >= 0)
			{
				v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D80 + 32i64))(qword_140C63D80, v4);
			LABEL_15:
				v6 = (_DWORD*)v5;
				if (v5)
				{
					v7 = sub_14018B280(32i64, 0);
					v8 = v7;
					if (v7)
					{
						*(_QWORD*)v7 = off_140B67390;
						*((_QWORD*)v7 + 1) = v6;
						v9 = sub_14018B280(24i64, 0);
						*((_QWORD*)v8 + 3) = v9;
						*(_QWORD*)v9 = v9;
						*(_QWORD*)(*((_QWORD*)v8 + 3) + 8i64) = *((_QWORD*)v8 + 3);
					}
					else
					{
						v8 = 0i64;
					}
					*(_QWORD*)sub_140055BE0(a1 + 8, v6) = v8;
				}
			}
			if (++v4 >= v3)
				goto LABEL_21;
		}
		v5 = qword_140C63848(off_140A6BE80, v4, qword_140C63858);
		goto LABEL_15;
	}
LABEL_21:
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6BEB8, qword_140C63858);
	}
	else
	{
		if (dword_140C6453C)
		{
			v11 = 0;
			goto LABEL_29;
		}
		if ((int)sub_1402206A0() < 0)
		{
			v11 = 0;
			goto LABEL_29;
		}
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65520 + 40i64))(qword_140C65520);
	}
	v11 = v10;
LABEL_29:
	v12 = 0;
	if (v11)
	{
		v13 = 9453572;
		do
		{
			if (qword_140C63848)
			{
				v14 = qword_140C63848(off_140A6BEB8, v12, qword_140C63858);
			}
			else
			{
				if (dword_140C6453C || (int)sub_1402206A0() < 0)
					goto LABEL_75;
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65520 + 32i64))(qword_140C65520, v12);
			}
			v15 = (_DWORD*)v14;
			if (!v14)
				goto LABEL_75;
			v16 = *(_DWORD*)(v14 + 16);
			if (!v16)
				goto LABEL_75;
			v17 = *(_QWORD*)(a1 + 16);
			v18 = v17;
			v19 = *(_QWORD*)(v17 + 8);
			while (v19)
			{
				if (*(_DWORD*)(v19 + 32) < v16)
				{
					v19 = *(_QWORD*)(v19 + 24);
				}
				else
				{
					v18 = v19;
					v19 = *(_QWORD*)(v19 + 16);
				}
			}
			if (v18 == v17 || v16 < *(_DWORD*)(v18 + 32))
			{
				v39 = *(_QWORD*)(a1 + 16);
				v20 = &v39;
			}
			else
			{
				v38 = v18;
				v20 = &v38;
			}
			v21 = *v20;
			if (v21 == v17)
				goto LABEL_75;
			v22 = v15[3];
			if (!v22)
				goto LABEL_75;
			v23 = qword_140C65968;
			if (qword_140C63840)
			{
				v24 = qword_140C63840(off_140A6BDA0, v22, qword_140C63858);
			LABEL_54:
				if (v24)
				{
					v25 = sub_140491BD0(v23, *(_DWORD*)(v24 + 32));
					if (v25)
					{
						v26 = *(_QWORD*)(v25 + 16);
						v27 = v26;
						v28 = *(_QWORD*)(v26 + 8);
						while (v28)
						{
							if (*(_DWORD*)(v28 + 32) < v22)
							{
								v28 = *(_QWORD*)(v28 + 24);
							}
							else
							{
								v27 = v28;
								v28 = *(_QWORD*)(v28 + 16);
							}
						}
						if (v27 == v26 || v22 < *(_DWORD*)(v27 + 32))
						{
							v37 = v26;
							v29 = &v37;
						}
						else
						{
							v40 = v27;
							v29 = &v40;
						}
						v30 = *v29;
						if (v30 != v26)
						{
							v31 = *(_QWORD*)(v30 + 40);
							if (v31)
							{
								v32 = *(_DWORD*)(*(_QWORD*)v31 + 12i64);
								if (v32 <= 0x17)
								{
									if (_bittest(&v13, v32))
									{
										v33 = sub_14018B280(16i64, 0);
										if (v33)
										{
											*((_QWORD*)v33 + 1) = v15;
											*(_QWORD*)v33 = off_140B68F20;
										}
										else
										{
											v33 = 0i64;
										}
										*(_QWORD*)sub_140055BE0(a1 + 40, v15) = v33;
										v34 = *(_QWORD*)(*(_QWORD*)(v21 + 40) + 24i64);
										v35 = sub_14018B280(24i64, 0);
										if (v35 != (int*)-16i64)
											*((_QWORD*)v35 + 2) = v33;
										*(_QWORD*)v35 = v34;
										*((_QWORD*)v35 + 1) = *(_QWORD*)(v34 + 8);
										**(_QWORD**)(v34 + 8) = v35;
										*(_QWORD*)(v34 + 8) = v35;
									}
								}
							}
						}
					}
				}
				goto LABEL_75;
			}
			if (!dword_140C64EC8 && (int)sub_14021F160() >= 0)
			{
				v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E80 + 24i64))(qword_140C64E80, v22);
				goto LABEL_54;
			}
		LABEL_75:
			++v12;
		} while (v12 < v11);
	}
	return 0i64;
}
// 140A6BDA0: using guessed type wchar_t *off_140A6BDA0[2];
// 140A6BE80: using guessed type wchar_t *off_140A6BE80[2];
// 140A6BEB8: using guessed type wchar_t *off_140A6BEB8[2];
// 140B67390: using guessed type __int64 (__fastcall *off_140B67390[13])();
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D80: using guessed type __int64 qword_140C63D80;
// 140C6453C: using guessed type int dword_140C6453C;
// 140C64E80: using guessed type __int64 qword_140C64E80;
// 140C64EC8: using guessed type int dword_140C64EC8;
// 140C65038: using guessed type int dword_140C65038;
// 140C65520: using guessed type __int64 qword_140C65520;
// 140C65968: using guessed type __int64 qword_140C65968;

