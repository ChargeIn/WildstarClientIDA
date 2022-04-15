//----- (0000000140860A10) ----------------------------------------------------
char __fastcall sub_140860A10(__int64 a1, char a2)
{
	char result; // al
	bool v4; // zf
	__int64 v5; // rdx
	_DWORD* v6; // rdx

	result = *(_BYTE*)(a1 + 381);
	if ((result & 0x10) == 0 && (result & 0x40) == 0)
	{
		result |= 0x40u;
		v4 = *(_BYTE*)(a1 + 382) >= 0;
		*(_BYTE*)(a1 + 381) = result;
		if (v4)
		{
			result = 0;
			*(_DWORD*)(a1 + 300) = 0;
			*(_DWORD*)(a1 + 204) = 0;
		}
		if (!a2)
			result = sub_140858700(3u, a1);
		v5 = *(_QWORD*)(a1 + 128);
		if (v5)
			result = sub_14083AED0(qword_140C61B70, v5);
		v6 = *(_DWORD**)(a1 + 504);
		if (v6)
			return sub_14083A5A0(qword_140C61B98, v6);
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B98: using guessed type __int64 qword_140C61B98;

