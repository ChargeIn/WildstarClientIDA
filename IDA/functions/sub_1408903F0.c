//----- (00000001408903F0) ----------------------------------------------------
__int64 __fastcall sub_1408903F0(__int64 a1, char a2)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 256) = 0;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_DWORD*)(a1 + 280) = 0;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_BYTE*)(a1 + 298) = 0;
	result = a1;
	*(_WORD*)(a1 + 296) = 1;
	*(_BYTE*)(a1 + 299) = a2;
	return result;
}

