//----- (0000000140895390) ----------------------------------------------------
__int64 __fastcall sub_140895390(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	int v7; // eax
	int v8; // [rsp+58h] [rbp+20h] BYREF

	result = sub_14088C3E0(a1, a2, a3);
	if ((_DWORD)result == 1)
	{
		v7 = sub_140892310(a1[19]);
		result = sub_140895670(a1, a2, a3, -v7, &v8);
		a1[14] = v8;
	}
	return result;
}

