//----- (000000014049DB90) ----------------------------------------------------
bool __fastcall sub_14049DB90(__int64 a1, __int64 a2, int a3, int a4)
{
	bool result; // al
	int v7; // edx
	int v8; // ebx

	if (!a2)
		return 0;
	v7 = sub_1403B48B0(a2);
	result = 0;
	v8 = a3 - 1;
	if (!v8)
		return v7 == a4;
	if (v8 == 1)
		return v7 != a4;
	return result;
}

