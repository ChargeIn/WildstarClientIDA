//----- (0000000140060B60) ----------------------------------------------------
__int64 __fastcall sub_140060B60(__int64 a1, int a2, __int64 a3)
{
	int v4; // ebx
	__int64 result; // rax
	__int64 v7; // rdx
	char v8; // cl

	v4 = a2;
	result = sub_140064780(a1, 0i64, 0i64, 8 * a2 + 40);
	v7 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)result = *(_QWORD*)(v7 + 40);
	v8 = *(_BYTE*)(v7 + 32);
	*(_QWORD*)(v7 + 40) = result;
	*(_BYTE*)(result + 8) = 6;
	*(_BYTE*)(result + 10) = 0;
	*(_QWORD*)(result + 24) = a3;
	*(_BYTE*)(result + 11) = v4;
	for (*(_BYTE*)(result + 9) = v8 & 3; v4; *(_QWORD*)(result + 8i64 * v4 + 40) = 0i64)
		--v4;
	return result;
}

