//----- (00000001403352B0) ----------------------------------------------------
_QWORD* __fastcall sub_1403352B0(_QWORD* a1, unsigned int a2, unsigned __int16 a3)
{
	char v3; // di
	void* v6; // r8
	int v8; // [rsp+20h] [rbp-48h]
	int v9; // [rsp+28h] [rbp-40h]
	__int64 v10; // [rsp+40h] [rbp-28h] BYREF
	__int64 v11; // [rsp+48h] [rbp-20h]

	v3 = 0;
	if (a3)
	{
		v3 = 1;
		v6 = (void*)sub_14018EFA0(&v10, (__int64)L":%u", a3)[1];
	}
	else
	{
		v6 = &unk_1409E6794;
	}
	v9 = (unsigned __int8)a2;
	v8 = BYTE1(a2);
	sub_14018EFA0(a1, (__int64)L"%u.%u.%u.%u%s", HIBYTE(a2), BYTE2(a2), v8, v9, v6);
	if ((v3 & 1) != 0 && v11)
		sub_14018B900(v11, 0);
	return a1;
}
// 140AF1D68: using guessed type wchar_t aU_0[4];
// 140AF1D70: using guessed type wchar_t aUUUUS_0[14];

