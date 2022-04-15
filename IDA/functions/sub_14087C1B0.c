//----- (000000014087C1B0) ----------------------------------------------------
__int64 __fastcall sub_14087C1B0(__int64 a1)
{
	unsigned int v2; // ebx

	v2 = (unsigned int)sub_1407DDB28() << 15;
	return (v2 + (unsigned int)sub_1407DDB28()) % *(_DWORD*)(a1 + 28);
}

