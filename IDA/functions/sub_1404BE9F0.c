//----- (00000001404BE9F0) ----------------------------------------------------
bool __fastcall sub_1404BE9F0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	bool result; // al

	v2 = *(_QWORD*)(a1 + 16);
	result = 0;
	if (v2)
		return *(_QWORD*)(v2 + 288) == a2;
	return result;
}

