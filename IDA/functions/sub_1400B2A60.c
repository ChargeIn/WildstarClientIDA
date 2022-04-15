#include "../winhttp.h"

//----- (00000001400B2A60) ----------------------------------------------------
__int64* sub_1400B2A60()
{
	int* v0; // rax
	int* v1; // rbx
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rbx

	sub_1400B0D30();
	qword_140C66F70 = (__int64)off_140B560E0;
	xmmword_140C67180 = 0i64;
	qword_140C66F78 = (__int64)off_140B56128;
	qword_140C67118 = (__int64)off_140B560C8;
	qword_140C67190 = 0i64;
	qword_140C67120 = (__int64)&off_140B560D0;
	qword_140C67128 = (__int64)off_140B560B8;
	qword_140C67130 = (__int64)off_140B560C0;
	qword_140C67138 = (__int64)off_140B560A8;
	qword_140C67140 = (__int64)off_140B560B0;
	qword_140C67148 = (__int64)off_140B56098;
	qword_140C67150 = (__int64)off_140B560A0;
	qword_140C67158 = (__int64)off_140B56088;
	qword_140C67160 = (__int64)off_140B56090;
	qword_140C67168 = (__int64)off_140B56078;
	qword_140C67170 = (__int64)off_140B56080;
	v0 = sub_14018B280(8i64, 0);
	*(_QWORD*)&xmmword_140C67180 = v0;
	*((_QWORD*)&xmmword_140C67180 + 1) = v0;
	qword_140C67190 = (__int64)(v0 + 2);
	if (v0)
		*(_BYTE*)v0 = 0;
	qword_140C671B0 = 0i64;
	xmmword_140C671A0 = 0i64;
	v1 = sub_14018B280(1i64, 0);
	qword_140C671B0 = (__int64)v1 + 1;
	*(_QWORD*)&xmmword_140C671A0 = v1;
	*((_QWORD*)&xmmword_140C671A0 + 1) = v1;
	sub_1407DB590(v1, &dword_1409D0233, 0i64);
	*((_QWORD*)&xmmword_140C671A0 + 1) = v1;
	if (v1)
		*(_BYTE*)v1 = 0;
	qword_140C671D0 = 0i64;
	*(_OWORD*)&StringUuid = 0i64;
	v2 = sub_14018B280(8i64, 0);
	StringUuid = (RPC_CSTR)v2;
	*(&StringUuid + 1) = (RPC_CSTR)v2;
	qword_140C671D0 = (__int64)(v2 + 2);
	if (v2)
		*(_BYTE*)v2 = 0;
	qword_140C671F0 = 0i64;
	xmmword_140C671E0 = 0i64;
	v3 = sub_14018B280(8i64, 0);
	*(_QWORD*)&xmmword_140C671E0 = v3;
	*((_QWORD*)&xmmword_140C671E0 + 1) = v3;
	qword_140C671F0 = (__int64)(v3 + 2);
	if (v3)
		*(_BYTE*)v3 = 0;
	qword_140C67210 = 0i64;
	*(_OWORD*)&xmmword_140C67200 = 0i64;
	v4 = sub_14018B280(8i64, 0);
	xmmword_140C67200 = (RPC_CSTR)v4;
	*(&xmmword_140C67200 + 1) = (RPC_CSTR)v4;
	qword_140C67210 = (__int64)(v4 + 2);
	if (v4)
		*(_BYTE*)v4 = 0;
	v5 = qword_140C67048;
	qword_140C67230 = 0i64;
	xmmword_140C67220 = 0i64;
	dword_140C67238 = 0;
	qword_140C67248 = 0i64;
	dword_140C67250 = 0;
	dword_140C67034 = 400;
	if ((unsigned __int64)(xmmword_140C67050 - qword_140C67048) < 0x24)
	{
		sub_1407DB590((int*)qword_140C67048, (int*)&qword_140A12CE8, xmmword_140C67050 - qword_140C67048);
		sub_14001B050(
			&qword_140C67040,
			(int*)((char*)&qword_140A12CE8 + xmmword_140C67050 - qword_140C67048),
			dword_140A12D0C);
	}
	else
	{
		*(_QWORD*)qword_140C67048 = 0x4643463941334438i64;
		qmemcpy((void*)(v5 + 8), "-ED19-A0BC-2CCB-4239BABB33E9", 28);
		v6 = xmmword_140C67050;
		v7 = qword_140C67048 + 36;
		if (qword_140C67048 + 36 != (_QWORD)xmmword_140C67050)
		{
			sub_1407DB590((int*)(qword_140C67048 + 36), (int*)xmmword_140C67050, 1ui64);
			*(_QWORD*)&xmmword_140C67050 = v7 - v6 + xmmword_140C67050;
		}
	}
	qword_140C67038 = 1001i64;
	return &qword_140C66F70;
}
// 1409D0233: using guessed type int dword_1409D0233;
// 140A12CE8: using guessed type __int64 qword_140A12CE8;
// 140A12D0C: using guessed type int dword_140A12D0C[45];
// 140B56078: using guessed type __int64 (__fastcall *off_140B56078[12])();
// 140B56080: using guessed type __int64 (__fastcall *off_140B56080[11])();
// 140B56088: using guessed type __int64 (__fastcall *off_140B56088[10])();
// 140B56090: using guessed type __int64 (__fastcall *off_140B56090[9])();
// 140B56098: using guessed type __int64 (__fastcall *off_140B56098[8])();
// 140B560A0: using guessed type __int64 (__fastcall *off_140B560A0[7])();
// 140B560A8: using guessed type __int64 (__fastcall *off_140B560A8[6])();
// 140B560B0: using guessed type __int64 (__fastcall *off_140B560B0[5])();
// 140B560B8: using guessed type __int64 (__fastcall *off_140B560B8[4])();
// 140B560C0: using guessed type __int64 (__fastcall *off_140B560C0[3])();
// 140B560C8: using guessed type __int64 (__fastcall *off_140B560C8[2])();
// 140B560D0: using guessed type __int64 (__fastcall *off_140B560D0)();
// 140B560E0: using guessed type __int64 (__fastcall *off_140B560E0[14])();
// 140B56128: using guessed type __int64 (__fastcall *off_140B56128[5])();
// 140C66F70: using guessed type __int64 qword_140C66F70;
// 140C66F78: using guessed type __int64 qword_140C66F78;
// 140C67034: using guessed type int dword_140C67034;
// 140C67038: using guessed type __int64 qword_140C67038;
// 140C67040: using guessed type _QWORD qword_140C67040;
// 140C67048: using guessed type __int64 qword_140C67048;
// 140C67050: using guessed type __int128 xmmword_140C67050;
// 140C67118: using guessed type __int64 qword_140C67118;
// 140C67120: using guessed type __int64 qword_140C67120;
// 140C67128: using guessed type __int64 qword_140C67128;
// 140C67130: using guessed type __int64 qword_140C67130;
// 140C67138: using guessed type __int64 qword_140C67138;
// 140C67140: using guessed type __int64 qword_140C67140;
// 140C67148: using guessed type __int64 qword_140C67148;
// 140C67150: using guessed type __int64 qword_140C67150;
// 140C67158: using guessed type __int64 qword_140C67158;
// 140C67160: using guessed type __int64 qword_140C67160;
// 140C67168: using guessed type __int64 qword_140C67168;
// 140C67170: using guessed type __int64 qword_140C67170;
// 140C67180: using guessed type __int128 xmmword_140C67180;
// 140C67190: using guessed type __int64 qword_140C67190;
// 140C671A0: using guessed type __int128 xmmword_140C671A0;
// 140C671B0: using guessed type __int64 qword_140C671B0;
// 140C671D0: using guessed type __int64 qword_140C671D0;
// 140C671E0: using guessed type __int128 xmmword_140C671E0;
// 140C671F0: using guessed type __int64 qword_140C671F0;
// 140C67210: using guessed type __int64 qword_140C67210;
// 140C67220: using guessed type __int128 xmmword_140C67220;
// 140C67230: using guessed type __int64 qword_140C67230;
// 140C67238: using guessed type int dword_140C67238;
// 140C67248: using guessed type __int64 qword_140C67248;
// 140C67250: using guessed type int dword_140C67250;

