#ifndef TTCPDefH
#define TTCPDefH

/**
* @defgroup TCP�õ���һЩ�����Ͳ���
* @author igame
* @date 2009-1-5
* @version
* revision
* -
* @{
*/

namespace igame
{
	/**
	* @name TCP��ACE_Message_Block���Ͷ��� @see ACE_Message_Block
	* @{
	*/
	
	/// @brief TCP���ݽ���
	#define TCP_DATA_RECEIVE			0x5505
	/// @brief TCP�ͻ�������
	#define TCP_CLIENT_CONNECT			0x5506
	/// @brief TCP�ͻ��˶���
	#define TCP_CLIENT_DISCONNECT		0x5507
	/// @brief TCP���ݷ���
	#define TCP_DATA_SEND				0x5508
	/// @brief TCP���ݷ��ͳɹ�
	#define TCP_DATA_SEND_SUCCEEDED		0x5509
	/// @brief TCP���ݷ���ʧ��
	#define TCP_DATA_SEND_FAILED		0x550A
	/**
	* @}
	*/

/// Ĭ�ϼ�����ַ:ż�ĳ��ƺ�
#define DEF_LISTENING_PORT	777

#pragma pack(push)
#pragma pack(1)
	/**
	* @brief Tcp��ͷ�ṹ
	*/
	typedef struct tag_TTcpPackHeader
	{
		unsigned int seq; //< �����
		unsigned short len; //< ������
	}TTcpPackHeader;
#pragma pack(pop)

/// ��ͷ�ߴ��
#define TCP_PACK_HEADER_SIZE sizeof(tag_TTcpPackHeader)

} // namespace igame

/**
* @}
*/

#endif // TTCPDefH