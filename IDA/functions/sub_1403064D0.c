//----- (00000001403064D0) ----------------------------------------------------
float __fastcall sub_1403064D0(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v6, 0i64);
	sub_140300DD0((__int64)a1, 0x100u);
	return *(float*)(a1[209] + 20 * a2);
}
// 1403064D0: using guessed type int var_18[6];

