//----- (0000000140845ED0) ----------------------------------------------------
__int64 __fastcall sub_140845ED0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	int v3; // r10d
	unsigned int v4; // r9d
	unsigned __int8 v5; // dl
	int v7; // r11d
	char v8; // cl

	v2 = *(_QWORD*)(a2 + 176);
	v3 = *(unsigned __int8*)(a1 + 137);
	v4 = 0;
	v5 = 0;
	if (*(_BYTE*)(a1 + 137))
	{
		v8 = 0;
		do
		{
			v7 = (unsigned __int8)(dword_140C61FF0 & *(_BYTE*)(v2 + 18));
			if (_bittest(&v7, *(unsigned __int8*)(v5 + a1 + 120)))
				v4 |= 1 << v8;
			v8 = ++v5;
		} while (v5 < v3);
	}
	return v4;
}
// 140C61FF0: using guessed type int dword_140C61FF0;

