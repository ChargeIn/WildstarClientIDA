//----- (00000001408570F0) ----------------------------------------------------
__int64 __fastcall sub_1408570F0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // r8
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 88) & 2) != 0)
	{
		v2 = *(_QWORD*)(a1 + 80);
		if (v2)
		{
			v3 = *(_QWORD*)(a1 + 224);
			if (v3)
				result = sub_14083B060(qword_140C61B70, v2, v3);
			*(_BYTE*)(a1 + 88) &= ~2u;
			*(_QWORD*)(a1 + 80) = 0i64;
		}
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

