//----- (000000014031E150) ----------------------------------------------------
__int64 __fastcall sub_14031E150(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 1256);
	*(_DWORD*)(a1 + 376) = a2;
	result = *(_DWORD*)(a1 + 1336) - (unsigned int)*(unsigned __int16*)(v2 + 2);
	*(_DWORD*)(a1 + 1344) = result;
	return result;
}

