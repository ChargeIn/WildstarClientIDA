//----- (00000001407F55A4) ----------------------------------------------------
__int64 __fastcall sub_1407F55A4(int a1)
{
	__int64 v1; // rax

	if (a1 == -2)
	{
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
	}
	else
	{
		if (a1 >= 0 && a1 < (unsigned int)dword_140DC523C)
		{
			v1 = qword_140C60410[(__int64)a1 >> 5];
			if ((*(_BYTE*)(v1 + 88i64 * (a1 & 0x1F) + 8) & 1) != 0)
				return *(_QWORD*)(v1 + 88i64 * (a1 & 0x1F));
		}
		*(_DWORD*)sub_1407DE140() = 0;
		*(_DWORD*)sub_1407DE1B0() = 9;
		sub_1407DC370();
	}
	return -1i64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

