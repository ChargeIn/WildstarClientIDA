//----- (000000014016A0C0) ----------------------------------------------------
__int64 __fastcall sub_14016A0C0(__int64 a1)
{
	unsigned __int64 v1; // rax
	char v2; // al

	v1 = *(_QWORD*)(a1 + 664);
	v2 = v1 >> 9;
	if ((v1 & 0x100) != 0)
		return v2 & 1 | 2u;
	else
		return v2 & 1;
}

