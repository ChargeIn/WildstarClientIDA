//----- (000000014048DAE0) ----------------------------------------------------
__int64 __fastcall sub_14048DAE0(__int64 a1, __int64 a2, int a3)
{
	__int64 result; // rax
	int v4; // [rsp+40h] [rbp+18h] BYREF

	result = *(unsigned int*)(a2 + 60);
	v4 = *(_DWORD*)(a2 + 60);
	if (a3 || *(_DWORD*)(a2 + 96))
		return sub_14048FC60(a1 + 168, &v4);
	return result;
}

