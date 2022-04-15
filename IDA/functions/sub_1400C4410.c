//----- (00000001400C4410) ----------------------------------------------------
__int64 __fastcall sub_1400C4410(__int64 a1)
{
	int v2; // ebx
	__int64 result; // rax
	int v4; // ebx
	int v5; // [rsp+30h] [rbp+8h] BYREF
	int v6; // [rsp+38h] [rbp+10h] BYREF

	if ((*(_BYTE*)(a1 + 1392) & 1) != 0)
	{
		v2 = *sub_1400C3930((_QWORD**)a1, &v5);
		result = (unsigned int)*sub_1400C3930((_QWORD**)(a1 + 416), &v6);
		if ((int)result < v2)
			result = (unsigned int)v2;
		if ((int)result <= 0)
			return (unsigned int)*sub_1400C3930((_QWORD**)(a1 + 832), &v5);
	}
	else
	{
		v4 = sub_1400C3930((_QWORD**)a1, &v5)[1];
		result = (unsigned int)sub_1400C3930((_QWORD**)(a1 + 416), &v6)[1];
		if ((int)result < v4)
			result = (unsigned int)v4;
		if ((int)result <= 0)
			return (unsigned int)sub_1400C3930((_QWORD**)(a1 + 832), &v5)[1];
	}
	return result;
}

