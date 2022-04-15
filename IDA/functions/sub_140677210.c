//----- (0000000140677210) ----------------------------------------------------
__int64 __fastcall sub_140677210(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
	unsigned int v9; // ebx
	char v11[24]; // [rsp+30h] [rbp-588h] BYREF
	char v12[8]; // [rsp+48h] [rbp-570h] BYREF
	__int64 v13; // [rsp+50h] [rbp-568h]
	char v14[8]; // [rsp+68h] [rbp-550h] BYREF
	__int64 v15; // [rsp+70h] [rbp-548h]
	char v16[8]; // [rsp+88h] [rbp-530h] BYREF
	__int64 v17; // [rsp+90h] [rbp-528h]
	char v18[8]; // [rsp+A8h] [rbp-510h] BYREF
	__int64 v19; // [rsp+B0h] [rbp-508h]
	__int64 v20; // [rsp+D0h] [rbp-4E8h]
	__int64 v21; // [rsp+3D0h] [rbp-1E8h]

	sub_14066DC40((__int64)v11, a1);
	v9 = sub_140677330((__int64)v11, a2, a3, a4, a5, a6);
	if (v20)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		v20 = 0i64;
	}
	if (v21)
		sub_14018B900(v21, 0);
	sub_140008410((__int64)v18);
	sub_14018B900(v19, 0);
	sub_140008410((__int64)v16);
	sub_14018B900(v17, 0);
	sub_140008410((__int64)v14);
	sub_14018B900(v15, 0);
	sub_140008410((__int64)v12);
	sub_14018B900(v13, 0);
	return v9;
}
// 140677210: using guessed type char var_510[8];
// 140677210: using guessed type char var_530[8];
// 140677210: using guessed type char var_550[8];
// 140677210: using guessed type char var_570[8];

