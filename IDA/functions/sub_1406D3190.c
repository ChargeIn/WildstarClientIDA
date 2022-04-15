//----- (00000001406D3190) ----------------------------------------------------
char __fastcall sub_1406D3190(_BYTE* a1)
{
	char result; // al

	if (a1[1024])
		return 1;
	result = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 600i64))(a1);
	if (result)
		return 1;
	return result;
}

