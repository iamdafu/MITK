#ifndef IMAGECHANNELSELECTOR_H_HEADER_INCLUDED_C1E4F4E7
#define IMAGECHANNELSELECTOR_H_HEADER_INCLUDED_C1E4F4E7

#include "mitkCommon.h"
#include "ImageToImageFilter.h"
#include "SubImageSelector.h"

namespace mitk {

//##ModelId=3E0B46B200FD
//##Documentation
//## Provides access to a channel of the input image. If the input is generated
//## by a ProcessObject, only the required data is requested.
class ImageChannelSelector : public SubImageSelector
{
public:
	mitkClassMacro(ImageChannelSelector,SubImageSelector);

	itkNewMacro(Self);  

	itkGetConstMacro(ChannelNr,int);
	itkSetMacro(ChannelNr,int);

protected:
	//##ModelId=3E1B1980039C
	ImageChannelSelector();
	//##ModelId=3E1B198003B0
	virtual ~ImageChannelSelector();
    //##ModelId=3E3BD0C70343
    virtual void GenerateOutputInformation();

	//##ModelId=3E3BD0C903DC
    //##ModelId=3E3BD0C903DC
    virtual void GenerateData();

    //##ModelId=3E1B1A0C005E
	int m_ChannelNr;
};

} // namespace mitk



#endif /* IMAGECHANNELSELECTOR_H_HEADER_INCLUDED_C1E4F4E7 */
