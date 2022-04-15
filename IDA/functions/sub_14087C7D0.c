//----- (000000014087C7D0) ----------------------------------------------------
__int64 __fastcall sub_14087C7D0(__int64 a1, unsigned __int16 a2, int a3)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(result + 8i64 * a2 + 4) = a3;
	return result;
}

