//----- (000000014054E880) ----------------------------------------------------
int* __fastcall sub_14054E880(__int64 a1, __int64 a2)
{
	int* result; // rax

	result = sub_14018B280(64i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *(_DWORD*)a2;
		result[9] = *(_DWORD*)(a2 + 4);
		*((_BYTE*)result + 40) = *(_BYTE*)(a2 + 8);
		result[11] = *(_DWORD*)(a2 + 12);
		result[12] = *(_DWORD*)(a2 + 16);
		result[13] = *(_DWORD*)(a2 + 20);
		result[14] = *(_DWORD*)(a2 + 24);
		result[15] = *(_DWORD*)(a2 + 28);
	}
	return result;
}

