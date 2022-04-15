//----- (00000001400B1060) ----------------------------------------------------
__int64 __fastcall sub_1400B1060(unsigned int a1, __int64 a2, _QWORD* a3, unsigned int a4, int* a5)
{
	unsigned __int64 v5; // rbp
	_QWORD* v6; // rbx
	__int64 v8; // r8
	int* v9; // rax
	__int64 v10; // rsi
	unsigned __int64 v11; // rdi
	__int64 v12; // rax
	unsigned int v14; // eax
	_QWORD* v15; // rax
	__int64 v16; // rdx
	unsigned int v17; // ebx
	__int64 v19; // [rsp+30h] [rbp-58h] BYREF
	int* v20; // [rsp+38h] [rbp-50h]
	int* v21; // [rsp+40h] [rbp-48h]
	int* v22; // [rsp+48h] [rbp-40h]
	__int64 v23; // [rsp+50h] [rbp-38h] BYREF
	__int64 v24; // [rsp+58h] [rbp-30h]
	__int64 v25; // [rsp+A0h] [rbp+18h] BYREF

	v5 = a4;
	v6 = a3;
	if (!a3 || !a2)
		return 2147942487i64;
	*((_QWORD*)&xmmword_140C67080 + 1) = a2;
	v8 = -1i64;
	do
		++v8;
	while (*((_BYTE*)a5 + v8));
	sub_14001B1A0((__int64)&unk_140C67060, a5, (int*)((char*)a5 + v8));
	v9 = sub_14018B280(16i64, 0);
	v10 = (__int64)v9;
	v20 = v9;
	v21 = v9;
	v22 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	v11 = 0i64;
	if (v5)
	{
		v25 = 0x141D0D810i64;
		do
		{
			if (v11)
			{
				v12 = 0i64;
				while (*(_WORD*)&asc_1409D17C4[2 * v12++ + 2] != 0)
					;
				sub_14001C310(&v19, (int*)",", (int*)&asc_1409D17C4[2 * v12]);
			}
			v14 = sub_140335360((int*)*v6);
			v15 = sub_1403352B0(&v23, v14, *((_WORD*)v6 + 4));
			sub_14001C310(&v19, (int*)v15[1], (int*)v15[2]);
			if (v24)
				sub_14018B900(v24, 0);
			sub_1401A3130(95, 2, &v25, &qword_140C66F70, v11, *v6);
			v16 = xmmword_140C67020;
			if ((_QWORD)xmmword_140C67020 == *((_QWORD*)&xmmword_140C67020 + 1))
			{
				sub_1400B4C50(&qword_140C67010, (_QWORD*)xmmword_140C67020, v6);
			}
			else
			{
				if ((_QWORD)xmmword_140C67020)
				{
					*(_QWORD*)xmmword_140C67020 = *v6;
					*(_QWORD*)(v16 + 8) = v6[1];
					v16 = xmmword_140C67020;
				}
				*(_QWORD*)&xmmword_140C67020 = v16 + 16;
			}
			++v11;
			v6 += 2;
		} while (v11 < v5);
		v10 = (__int64)v20;
	}
	v17 = (*(__int64(__fastcall**)(__int64*, _QWORD))(qword_140C66F70 + 32))(&qword_140C66F70, a1);
	if (v10)
		sub_14018B900(v10, 0);
	return v17;
}
// 140C66F70: using guessed type __int64 qword_140C66F70;
// 140C67010: using guessed type _QWORD qword_140C67010;
// 140C67020: using guessed type __int128 xmmword_140C67020;
// 140C67080: using guessed type __int128 xmmword_140C67080;

