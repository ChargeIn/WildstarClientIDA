//----- (000000014019B4D0) ----------------------------------------------------
__int64 __fastcall sub_14019B4D0(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v4; // rdx
	int v7; // [rsp+40h] [rbp+18h] BYREF
	_WORD* v8; // [rsp+48h] [rbp+20h] BYREF

	v4 = *(_QWORD*)(a3 + 16);
	v8 = *(_WORD**)(a3 + 8);
	if ((unsigned int)sub_14019D5F0(&v8, v4, &v7))
		return sub_14002C690(a1, a2, v7);
	else
		return 0i64;
}

