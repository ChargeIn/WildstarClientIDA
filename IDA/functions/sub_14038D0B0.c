//----- (000000014038D0B0) ----------------------------------------------------
__int64 __fastcall sub_14038D0B0(__int64 a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_QWORD*)a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64, int*))(v1 + 32))(a1, v4);
	sub_14038BD40(a1);
	return *(unsigned int*)(a1 + 920);
}
// 14038D0B0: using guessed type int var_18[6];

