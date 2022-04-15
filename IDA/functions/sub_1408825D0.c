//----- (00000001408825D0) ----------------------------------------------------
__int64 __fastcall sub_1408825D0(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax

	v3 = 0i64;
	if ((unsigned __int64)(a2 - 1) <= 0xFFFFFFFE)
	{
		v3 = 24i64;
		if (((a2 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x18)
			v3 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
	}
	v4 = sub_140881F60(a1, v3);
	return sub_140882110(a1, v4, v3);
}

