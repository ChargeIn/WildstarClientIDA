//----- (000000014019B590) ----------------------------------------------------
__int64 __fastcall sub_14019B590(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v4; // rdx
	float v7; // [rsp+40h] [rbp+18h] BYREF
	WCHAR* v8; // [rsp+48h] [rbp+20h] BYREF

	v4 = *(_QWORD*)(a3 + 16);
	v8 = *(WCHAR**)(a3 + 8);
	if ((unsigned int)sub_14019A560(&v8, v4, &v7))
		return sub_14001A820(a1, a2, v7);
	else
		return 0i64;
}

