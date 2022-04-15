//----- (00000001401E49E0) ----------------------------------------------------
int* __fastcall sub_1401E49E0(__int64 a1, __int64 a2)
{
	int* result; // rax

	result = sub_14018B280(112i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *(_DWORD*)a2;
		result[12] = *(_DWORD*)(a2 + 16);
		result[13] = *(_DWORD*)(a2 + 20);
		result[14] = *(_DWORD*)(a2 + 24);
		*((_OWORD*)result + 4) = *(_OWORD*)(a2 + 32);
		result[20] = *(_DWORD*)(a2 + 48);
		result[21] = *(_DWORD*)(a2 + 52);
		result[22] = *(_DWORD*)(a2 + 56);
		*((_OWORD*)result + 6) = *(_OWORD*)(a2 + 64);
	}
	return result;
}

